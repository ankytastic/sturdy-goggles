class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {
        if (nums.empty()) return 0;
        unordered_map<int, int> pointsMap;
        int maxNum = 0;        
        for (int num : nums) {
            pointsMap[num] += num;
            maxNum = max(maxNum, num);
        }
        vector<int> dp(maxNum + 1, 0);
        dp[1] = pointsMap[1];
        for (int i = 2; i <= maxNum; ++i) {
            dp[i] = max(dp[i-1], dp[i-2] + pointsMap[i]);
        }
        return dp[maxNum];
    }
}; 