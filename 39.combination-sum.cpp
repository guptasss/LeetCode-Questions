/*
 * @lc app=leetcode id=39 lang=cpp
 *
 * [39] Combination Sum
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> result;
        vector<int> path;
        sort(candidates.begin(), candidates.end());
        backtrack(candidates, 0, target, path, result);
        return result;
    }

private:
    void backtrack(const vector<int>& candidates, int start, int target, vector<int>& path, vector<vector<int>>& result) {
        if (target == 0) {
            result.push_back(path);
            return;
        }
        if (target < 0) {
            return;
        }
        for (int i = start; i < candidates.size(); ++i) {
            path.push_back(candidates[i]);
            backtrack(candidates, i, target - candidates[i], path, result);
            path.pop_back();
        }
    }
};
// @lc code=end

