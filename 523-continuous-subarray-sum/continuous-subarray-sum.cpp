class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int curr = 0;
        map<int, int> mpp;
        mpp[0] = -1;
        for (int i = 0; i < nums.size(); i++) {
            curr += nums[i];
            if (k != 0) {
                curr %= k;
            }
            if (mpp.find(curr) != mpp.end() && i - mpp[curr] >= 2) {
                return true;
            }
            if (mpp.find(curr) == mpp.end()) {
                mpp[curr] = i;
            }
        }
        return false;
    }
};