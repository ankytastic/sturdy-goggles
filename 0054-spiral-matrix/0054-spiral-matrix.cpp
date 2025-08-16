class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> res;
        if (matrix.empty()) return res;
        int sR = 0;
        int eR = matrix.size() - 1;
        int sC = 0;
        int eC = matrix[0].size() - 1;
        while (sR <= eR && sC <= eC) {
            for (int i = sC; i <= eC; i++) {
                res.push_back(matrix[sR][i]);
            }
            sR++;
            for (int i = sR; i <= eR; i++) {
                res.push_back(matrix[i][eC]);
            }
            eC--;
            if (sR <= eR) {
                for (int i = eC; i >= sC; i--) {
                    res.push_back(matrix[eR][i]);
                }
            }
            eR--;
            if (sC <= eC) {
                for (int i = eR; i >= sR; i--) {
                    res.push_back(matrix[i][sC]);
                }
            }
            sC++;
        }
        return res;
    }
};