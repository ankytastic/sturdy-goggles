class NumMatrix {
public:
    vector<vector<int>> grid;
    // vector<vector<int>> grir;
    NumMatrix(vector<vector<int>>& matrix) {
        grid = matrix;
        // grir=grid;
        for (int i = 0; i < grid.size(); i++) {
            int c = 0;
            for (int j = 0; j < grid[0].size(); j++) {
                c += grid[i][j];
                grid[i][j] = c;
            }
        }
    }

    int sumRegion(int row1, int col1, int row2, int col2) {
        int res = 0;
        for (int i = row1; i <= row2; i++) {
            res += grid[i][col2];
            if (col1 != 0)
                res -= grid[i][col1 - 1];
        }
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */