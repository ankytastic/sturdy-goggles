class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int fresh_orange = 0;
        queue<pair<int, int>> q;
        int n = grid.size();
        int m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1)
                    fresh_orange++;
                else if (grid[i][j] == 2)
                    q.push({i, j}); 
            }
        }
        if (fresh_orange == 0)
            return 0; 
        q.push({-1, -1});
        vector<vector<int>> dir = {{-1, 0}, {1, 0}, {0, 1}, {0, -1}};
        int mins = 0;
        while (not q.empty()) {
            auto cell = q.front();
            q.pop();
            int i = cell.first;
            int j = cell.second;
            if (i == -1 and j == -1) {
                mins++;
                if (not q.empty()) {
                    q.push({-1, -1});
                } else
                    break;
            } else {
                for (int d = 0; d < 4; d++) {
                    int row = i + dir[d][0];
                    int col = j + dir[d][1];
                    if (row < 0 or col < 0 or row >= n or col >= m)
                        continue;
                    else if (grid[row][col] == 2 or grid[row][col] == 0)
                        continue;
                    grid[row][col] = 2;
                    fresh_orange--;
                    q.push({row, col});
                }
            }
        }
        return (fresh_orange == 0) ? mins - 1 : -1;        
    }
};