class Solution {
public:
    int threeSumMulti(vector<int>& arr, int t) {
        int MOD = 1e9 + 7;
        vector<int> cou(101, 0);
        long long c = 0;
        for (int s : arr) {
            cou[s]++;
        }
        for (int i = 0; i < 101; i++) {
            if (cou[i] == 0)
                continue;
            for (int j = i; j < 101; j++) {
                if (cou[j] == 0)
                    continue;
                int k = t - i - j;
                if (k < 0 || k > 100)
                    continue;
                if (k < j)
                    continue;
                if (cou[k] == 0)
                    continue;
                if (i == j && j == k) {
                    c += 1LL * cou[i] * (cou[i] - 1) * (cou[i] - 2) / 6;
                } else if (i == j && j != k) {
                    c += 1LL * cou[j] * (cou[j] - 1) / 2 * cou[k];
                } else if (i != j && j == k) {
                    c += 1LL * cou[k] * (cou[k] - 1) / 2 * cou[i];
                } else {
                    c += 1LL * cou[i] * cou[j] * cou[k];
                }
                c = c % MOD;
            }
        }
        return (int)c;
    }
};