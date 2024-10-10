class Solution {
public:
    int minPath(vector<vector<int>>& grid, int row, int col, vector<vector<int>>& dp) {
        if (row == grid.size() - 1 && col == grid[0].size() - 1)
            return grid[row][col]; 

        if (dp[row][col] != -1) return dp[row][col];

        int i1 = INT_MAX, i2 = INT_MAX;
        
        // Move down
        if (row + 1 < grid.size())
            i1 = minPath(grid, row + 1, col, dp);
        
        // Move right
        if (col + 1 < grid[0].size())
            i2 = minPath(grid, row, col + 1, dp);
        
        dp[row][col] = grid[row][col] + min(i1, i2);
        return dp[row][col];
    }

    int minPathSum(vector<vector<int>>& grid) { 
        vector<vector<int>> dp(grid.size(), vector<int>(grid[0].size(), -1));
        return minPath(grid, 0, 0, dp); 
    }
};
