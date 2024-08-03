class Solution {
public:
    long long maxScore(vector<int>& nums1, vector<int>& nums2, int k) {
        int n = nums1.size();
        vector<pair<int, int>> pairs(n);
        for (int i = 0; i < n; i++) {
            pairs[i] = {nums2[i], nums1[i]};
        }
        sort(pairs.begin(), pairs.end(), greater<>());
        priority_queue<int, vector<int>, greater<int>> minHeap;
        long long sum = 0;
        long long maxScore = 0;
        for (int i = 0; i < n; ++i) {
            int num2 = pairs[i].first;
            int num1 = pairs[i].second;
            minHeap.push(num1);
            sum += num1;
            if (minHeap.size() > k) {
                sum -= minHeap.top();
                minHeap.pop();
            }
            if (minHeap.size() == k) {
                maxScore = max(maxScore, sum * num2);
            }
        }        
        return maxScore;
    }
};
