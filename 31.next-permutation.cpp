/*
 * @lc app=leetcode id=31 lang=cpp
 *
 * [31] Next Permutation
 */

// @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if(nums.size()==1)
            return;
        set<pair<int,int>> s;
        bool found=false;
        s.insert({nums[nums.size()-1],nums.size()-1});
        for(int i=nums.size()-2;i>=0;i--){
            int current_no=nums[i];
            pair<int,int> z={INT_MAX,INT_MAX};
            bool flag=false;
            for(auto it:s){
                if(it.first>current_no){
                    flag=true;
                    z=min(z,it);
                }
            }
            if(flag){
                found=true;
                s.erase(z);
                s.insert({current_no,i});
                nums[i]=z.first;
                int j=i+1;
                for(auto it:s){
                    nums[j]=it.first;
                    j++;
                }
            break;
            }
            s.insert({nums[i],i});
        }
        if(!found){
            return sort(nums.begin(),nums.end());
        }
        //stl provided by c++ next_permutation(nums.begin(),nums.end());
        
    }
};
// @lc code=end

