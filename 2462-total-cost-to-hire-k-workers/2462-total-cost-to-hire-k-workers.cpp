class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        int n = costs.size();
        long long total_cost = 0;
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> min_heap;
        int left = 0;
        int right = n - 1;
        for (int i = 0; i < candidates; ++i) {
            if (left <= right) {
                min_heap.emplace(costs[left], left);
                left++;
            }
            if (left <= right) {
                min_heap.emplace(costs[right], right);
                right--;
            }
        }
        for (int i = 0; i < k; ++i) {
            int cost = min_heap.top().first;
            int idx = min_heap.top().second;
            min_heap.pop();
            total_cost += cost;
            if (left <= right) {
                if (idx < left) {
                    min_heap.emplace(costs[left], left);
                    left++;
                } else {
                    min_heap.emplace(costs[right], right);
                    right--;
                }
            }
        }        
        return total_cost;
    }
};
