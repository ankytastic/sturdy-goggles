class Solution {
public:
    int numTrees(int n) {
        long long res=1;
        for(int i=1;i<=n;i++){
            res=res*(n+i)/i;
        }
        return (int)(res/(n+1));
        // DP Approach
        // vector<int> dp(n+1);
        // dp[0]=1;
        // dp[1]=1;
        // for(int i=2;i<=n;i++){
        //     int t=0;
        //     for(int j=1;j<=i;j++){
        //         int l=dp[j-1];
        //         int r=dp[i-j];
        //         t+=l*r;
        //     }
        //     dp[i]=t;
        // }
        // return dp[n];
    }
};