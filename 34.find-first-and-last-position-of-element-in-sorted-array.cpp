/*
 * @lc app=leetcode id=34 lang=cpp
 *
 * [34] Find First and Last Position of Element in Sorted Array
 */

// @lc code=start
class Solution {
    int lowerBound(vector<int>& arr, int target){
        int s=0;
        int e=arr.size()-1;
        int ans = -1;

        int mid = s + (e-s)/2;
        while(s<=e){
            if(target == arr[mid]){
                ans = mid;
                e = mid - 1;
            }
            else if(target < arr[mid]){
                e= mid -1;
            }
            else{
                s=mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }

    int upperBound(vector<int>& arr, int target){
        int s = 0;
        int e = arr.size()-1;
        int ans = -1;

        int  mid = s + (e-s)/2;
        while(s<=e){
            if(target == arr[mid]){
                ans = mid;
                s = mid + 1;
            }
            else if(target < arr[mid]){
                e= mid -1;
            }
            else{
                s=mid + 1;
            }
            mid = s + (e-s)/2;
        }
        return ans;
    }
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        return{lowerBound(nums,target),upperBound(nums,target)};
    }
};
// @lc code=end

