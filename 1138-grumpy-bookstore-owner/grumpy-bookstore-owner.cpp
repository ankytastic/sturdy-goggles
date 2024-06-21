class Solution {
public:
    int maxSatisfied(vector<int>& c, vector<int>& g, int m) {
        int winSum=0,zero=0,maxWin=0,n=c.size();
        for(int i=0;i<n;i++){
            if(g[i]==0) zero+=c[i];
            if(i<m){
                winSum+=(g[i]==1?c[i]:0);
            }
            else{
                winSum+=(g[i]==1?c[i]:0)-(g[i-m]==1?c[i-m]:0);
            }
            maxWin=max(maxWin,winSum);
        }
        return maxWin+zero;
    }
};