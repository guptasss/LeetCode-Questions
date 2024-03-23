/*
 * @lc app=leetcode id=38 lang=cpp
 *
 * [38] Count and Say
 */

// @lc code=start
class Solution {
public:
    string countAndSay(int n) {
        if(n == 1)  return "1";

        string s = countAndSay(n-1);

        int i = 0, j = 0;
        string r;

        while(i < s.size()) {
            j = i+1;

            while(j < s.size() && s[j] == s[i])
                ++j;

            string ct = to_string(j-i);
            r += ct + s[i];
            
            i = j;
        }
        return r;
    }
};
// @lc code=end

