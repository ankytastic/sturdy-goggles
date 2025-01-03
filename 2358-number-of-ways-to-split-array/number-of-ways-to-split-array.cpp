class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long totalSum = 0, leftSum = 0;        
        // Calculate the total sum of the array
        for (int num : nums) {
            totalSum += num;
        }        
        int count = 0;        
        // Traverse and calculate the left sum and right sum dynamically
        for (int i = 0; i < n - 1; ++i) {
            leftSum += nums[i];
            totalSum -= nums[i];
            if (leftSum >= totalSum) {
                count++;
            }
        }        
        return count;
    }
};
