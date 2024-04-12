class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int jumps = 0, farthest = 0, end = 0;
        for (int i = 0; i < n - 1; ++i) {
            farthest = max(farthest, i + nums[i]);
            if (farthest >= n - 1) {
                ++jumps;
                break;
            }
            if (i == end) {
                ++jumps;
                end = farthest;
            }
        }
        return jumps;
    }
};
