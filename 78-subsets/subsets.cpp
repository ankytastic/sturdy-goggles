class Solution {
public:
    void solve(vector<int>& nums, int idx, vector<int>& temp,
               vector<vector<int>>& result) {
        if (idx >= nums.size()) {
            result.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        solve(nums, idx + 1, temp, result);
        temp.pop_back();
        solve(nums, idx + 1, temp, result);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        vector<vector<int>> result;
        solve(nums, 0, temp, result);
        return result;
    }
};