class Solution {
public:
    
    void backtrack(vector<int>& candidates, int target, int index,
                   vector<int>& temp, vector<vector<int>>& ans) {
        
        if (target == 0) {
            ans.push_back(temp);
            return;
        }

        if (target < 0 || index >= candidates.size())
            return;

        // Pick current element
        temp.push_back(candidates[index]);
        backtrack(candidates, target - candidates[index], index, temp, ans);

        // Backtrack
        temp.pop_back();

        // Skip current element
        backtrack(candidates, target, index + 1, temp, ans);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        
        vector<vector<int>> ans;
        vector<int> temp;

        backtrack(candidates, target, 0, temp, ans);

        return ans;
    }
};
