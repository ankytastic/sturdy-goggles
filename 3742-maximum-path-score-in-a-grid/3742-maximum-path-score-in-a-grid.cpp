class Solution {
public:
    int maxPathScore(vector<vector<int>>& g, int k) {
        int m = g.size(), n = g[0].size();
        vector dp(m, vector(n, vector<int>(k+1, -1)));
        dp[0][0][0] = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(i==0 && j==0) continue;
                int cost = (g[i][j] == 0 ? 0 : 1);
                int score = g[i][j];
                for(int c=0;c<=k;c++){
                    int best = -1;
                    if(i>0 && c>=cost && dp[i-1][j][c-cost] != -1)
                        best = max(best, dp[i-1][j][c-cost] + score);

                    if(j>0 && c>=cost && dp[i][j-1][c-cost] != -1)
                        best = max(best, dp[i][j-1][c-cost] + score);

                    dp[i][j][c] = best;
                }
            }
        }

        int ans = -1;
        for(int c=0;c<=k;c++)
            ans = max(ans, dp[m-1][n-1][c]);

        return ans;
    }
};