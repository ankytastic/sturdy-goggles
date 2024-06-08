class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int curr = 0;
        map<int, int> mpp;
        for (int i = 0; i < nums.size(); i++) {
            curr += nums[i];
            if (curr % k == 0) {
                if (i >= 1)
                    return true;
            }
            if (mpp.find(curr % k) != mpp.end() && i - mpp[curr % k] >= 2) 
                return true;
            mpp[curr % k] = i;
        }
        return false;
    }
};