class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int n = m.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n / 2; j++) {
                int k = m[i][j];
                m[i][j] = m[i][n - 1 - j];
                m[i][n - 1 - j] = k;
            }
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (!(i + j >= n)) {
                    int k = m[i][j];
                    m[i][j] = m[n - 1 - j][n - 1 - i];
                    m[n - 1 - j][n - 1 - i] = k;
                }
            }
        }
    }
};