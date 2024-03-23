/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
 */

// @lc code=start
class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty())
            return {};

        unordered_map<char, string> mappings {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        vector<string> combinations;

        function<void(int, string)> backtrack = [&](int index, string path) {
            if (index == digits.size()) {
                combinations.push_back(path);
                return;
            }

            for (char c : mappings[digits[index]]) {
                backtrack(index + 1, path + c);
            }
        };

        backtrack(0, "");
        return combinations;
    }
};
// @lc code=end

