class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) {
            return 0;
        }
        vector<bool> p(n, true);
        p[0] = false;
        p[1] = false;
        for (int i = 2; i * i < n; i++) {
            if (p[i]) {
                for (int j = i * i; j < n; j += i) {
                    p[j] = false;
                }
            }
        }

        int cou = 0;
        for (int i = 0; i < n; i++)
            if (p[i])
                cou++;
        return cou;
    }
};