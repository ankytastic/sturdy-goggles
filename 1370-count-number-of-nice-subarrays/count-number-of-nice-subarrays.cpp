class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int n = nums.size();
    int count = 0;
    unordered_map<int, int> oddCount;
    oddCount[0] = 1;
    int oddNumbers = 0;
    for (int i = 0; i < n; i++) {
        if (nums[i] % 2 == 1) {
            oddNumbers++;
        }

        if (oddNumbers >= k) {
            count += oddCount[oddNumbers - k];
        }

        oddCount[oddNumbers]++;
    }

    return count;
    }
};