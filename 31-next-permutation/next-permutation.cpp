class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int bp = -1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                bp = i;
                break;
            }
        }
        if (bp == -1) {
            sort(nums.begin(), nums.end());
            return;
        }
        int g = INT_MAX;
        int j = 0;
        for (int i = nums.size() - 1; i > bp; i--) {
            if (nums[i] > nums[bp]) {
                if (nums[i] < g) {
                    g = nums[i];
                    j = i;
                }
            }
        }
        swap(nums[bp], nums[j]);
        sort(nums.begin() + bp + 1, nums.end());
    }
};