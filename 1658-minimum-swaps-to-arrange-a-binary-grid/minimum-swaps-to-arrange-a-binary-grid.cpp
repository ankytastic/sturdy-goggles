class Solution {
public:
    int minSwaps(vector<vector<int>>& g) {
        int n = g.size();
        vector<int> r(n, -1);
        for (int i = 0; i < n; i++)
            for (int j = n - 1; j >= 0; j--)
                if (g[i][j]) {
                    r[i] = j;
                    break;
                }

        int ans = 0;
        for (int i = 0; i < n; i++) {
            int j = i;
            while (j < n && r[j] > i)
                j++;
            if (j == n)
                return -1;

            while (j > i) {
                swap(r[j], r[j - 1]);
                ans++;
                j--;
            }
        }
        return ans;
    }
};