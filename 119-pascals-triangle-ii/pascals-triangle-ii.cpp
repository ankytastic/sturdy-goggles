class Solution {
public:
    int nCr(int n, int r) {
        long long res = 1;
        for (int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }
        return res;
    }
    vector<int> getRow(int n) {
        vector<int> a;
        for (int c = 0; c <= n; c++) {
            a.push_back(nCr(n , c ));
        }
        return a;
    }
};