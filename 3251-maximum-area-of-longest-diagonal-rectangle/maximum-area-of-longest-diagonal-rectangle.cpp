class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int res = INT_MIN;  // Use -FLT_MAX for float comparison
        int k = -1;
        for (int i = 0; i < d.size(); i++) {
            int m = (d[i][0] * d[i][0] + d[i][1] * d[i][1]);
            if (m > res) {
                res = m;
                k = d[i][0]*d[i][1];
            }
            else if(m==res){
                k=max(k,d[i][0]*d[i][1]);
            }
        }
        return k;
    }
};