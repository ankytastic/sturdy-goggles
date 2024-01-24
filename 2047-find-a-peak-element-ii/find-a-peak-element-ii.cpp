class Solution {
public:
    int findMax(vector<vector<int>> &mat, int n, int m, int col) {
        int maxValue = -1;
        int index = -1;
        for (int i = 0; i < n; i++) {
            if (mat[i][col] > maxValue) {
                maxValue = mat[i][col];
                index = i;
            }
        }
        return index;
    }

    vector<int> findPeakGrid(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        int low = 0, high = m - 1;
        while (high >= low) {
            int mid = low + (high - low) / 2;
            int maxRowI = findMax(mat, n, m, mid);
            int left = mid - 1 >= 0 ? mat[maxRowI][mid - 1] : INT_MIN; // Fix: Use INT_MIN instead of -1
            int right = mid + 1 < m ? mat[maxRowI][mid + 1] : INT_MIN; // Fix: Use INT_MIN instead of -1
            if (mat[maxRowI][mid] > left && mat[maxRowI][mid] > right) {
                return {maxRowI, mid};
            } else if (mat[maxRowI][mid] < left) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return {-1, -1};
    }
};
