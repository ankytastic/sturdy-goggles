class Solution {
public:
    int minCost(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        // Directions corresponding to the signs
        vector<pair<int, int>> directions = {
            {0, 1},  // right (1)
            {0, -1}, // left (2)
            {1, 0},  // down (3)
            {-1, 0}  // up (4)
        };

        // Priority queue to store (cost, x, y)
        priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
                       greater<tuple<int, int, int>>> pq;
        pq.push({0, 0, 0}); // start from (0, 0) with cost 0

        vector<vector<int>> costs(m,vector<int>(n, INT_MAX));
        costs[0][0] = 0;

        while (!pq.empty()) {
            auto [cost, x, y] = pq.top();
            pq.pop();

            // If we reach the bottom-right corner
            if (x == m - 1 && y == n - 1) {
                return cost;
            }

            // Explore neighbors
            for (int sign = 1; sign <= 4; ++sign) {
                int dx = directions[sign - 1].first;
                int dy = directions[sign - 1].second;
                int nx = x + dx;
                int ny = y + dy;

                if (nx >= 0 && nx < m && ny >= 0 && ny < n) { // Check bounds
                    int new_cost = cost + (grid[x][y] != sign ? 1 : 0);

                    if (new_cost < costs[nx][ny]) { // If we found a cheaper way
                        costs[nx][ny] = new_cost;
                        pq.push({new_cost, nx, ny});
                    }
                }
            }
        }

        return -1; // In case there's no valid path (shouldn't happen per
                   // problem statement)
    }
};