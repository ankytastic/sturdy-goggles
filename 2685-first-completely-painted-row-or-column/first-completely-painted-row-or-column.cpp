class Solution {
public:
    int firstCompleteIndex(vector<int>& arr, vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        
        // Step 1: Preprocess positions of values in the matrix
        unordered_map<int, pair<int, int>> positionMap;
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                positionMap[mat[i][j]] = {i, j};
            }
        }
        
        // Step 2: Initialize frequency arrays
        vector<int> rowCount(m, 0);
        vector<int> colCount(n, 0);
        
        // Step 3: Iterate through arr
        for (int i = 0; i < arr.size(); ++i) {
            int num = arr[i];
            auto pos = positionMap[num]; // Get the position of num
            
            int row = pos.first;
            int col = pos.second;
            
            // Increment counts
            rowCount[row]++;
            colCount[col]++;
            
            // Step 4: Check if any row or column is completely painted
            if (rowCount[row] == n || colCount[col] == m) {
                return i; // Return current index if complete
            }
        }
        
        return -1;
    }
};