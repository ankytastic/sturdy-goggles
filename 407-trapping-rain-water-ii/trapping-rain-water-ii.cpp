class Solution {
public:
    int trapRainWater(vector<vector<int>>& heightMap) {
        if (heightMap.empty() || heightMap[0].empty()) {
            return 0;
        }
        
        int m = heightMap.size();
        int n = heightMap[0].size();
        
        // Min-heap to store (height, row, column)
        priority_queue<vector<int>, vector<vector<int>>,greater<vector<int>>> minHeap;
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        
        // Add all the boundary cells to the min-heap
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if (i == 0 || i == m - 1 || j == 0 || j == n - 1) {
                    minHeap.push({heightMap[i][j], i, j});
                    visited[i][j] = true;
                }
            }
        }
        
        // Directions: up, down, left, right
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        int totalWater = 0;
        
        // Process the min-heap
        while (!minHeap.empty()) {
            auto cell = minHeap.top();
            minHeap.pop();
            int height = cell[0];
            int x = cell[1];
            int y = cell[2];
            
            // Check all 4 neighbors
            for (auto& dir : directions) {
                int nx = x + dir.first;
                int ny = y + dir.second;
                
                if (nx >= 0 && nx < m && ny >= 0 && ny < n && !visited[nx][ny]) {
                    visited[nx][ny] = true;
                    
                    // If the neighboring cell is lower, water can be trapped
                    if (heightMap[nx][ny] < height) {
                        totalWater += height - heightMap[nx][ny];
                    }
                    
                    // Push the neighbor into the heap with the updated height
                    minHeap.push({max(heightMap[nx][ny], height), nx, ny});
                }
            }
        }
        
        return totalWater;
    }
};