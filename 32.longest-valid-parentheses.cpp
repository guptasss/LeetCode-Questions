/*
 * @lc app=leetcode id=32 lang=cpp
 *
 * [32] Longest Valid Parentheses
 */

// @lc code=start
class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> st;
        st.push(-1);
        int maxlength=0;
        for(int i=0;i<s.length();i++)
        {
            char ch=s[i];
            if(ch=='(')
            {
                st.push(i);
            }
            else{
                st.pop();
                if(st.empty()==true)
                {
                    st.push(i);
                }
                else{
                    int length=i-st.top();
                    maxlength=max(length,maxlength);
                }
            }
        }
        return maxlength;
    }
};
// @lc code=end

