/*
 * @lc app=leetcode id=41 lang=cpp
 *
 * [41] First Missing Positive
 */

// @lc code=start
class Solution {
public:
 
    int firstMissingPositive(vector<int>& nums) 
    {
        int n{(int)nums.size()};
        int idx{};
        while(idx < n)
        {
            int correctPos = nums[idx];
            if(correctPos > 0 && correctPos <= n && nums[idx] != nums[correctPos-1])
                swap(nums[idx], nums[correctPos-1]);
            else
                idx++;
        }
        idx = 0;
        while(idx < n)
        {
            if(nums[idx] != idx + 1)
                return idx + 1;
            idx++;
        }
        
        return idx + 1;
    }
};
// @lc code=end

