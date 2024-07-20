class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        vector<vector<int>> vec(rowSum.size(),vector<int>(colSum.size(),0));
        int i=0,j=0;
        while(i<rowSum.size() && j<colSum.size()){
            vec[i][j]=min(rowSum[i],colSum[j]);
            rowSum[i]-=vec[i][j];
            colSum[j]-=vec[i][j];
            if(rowSum[i]==0){
                i++;
            }
            if(colSum[j]==0){
                j++;
            }
        }
        return vec;
    }
};