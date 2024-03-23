/*
 * @lc app=leetcode id=29 lang=cpp
 *
 * [29] Divide Two Integers
 */

// @lc code=start
class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if( dividend == INT_MIN && divisor == -1 )
            return INT_MAX;
        long long int ans = dividend/divisor;
        if(ans>INT_MAX)
            return INT_MAX;
        if(ans<INT_MIN)
            return INT_MIN;
        return ans;
    }
};
// @lc code=end

