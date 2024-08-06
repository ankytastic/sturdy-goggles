class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        float res=INT_MIN;
        int k=-1;
        for(int i=0;i<d.size();i++){
            float m=sqrt(d[i][0]*d[i][0]+d[i][1]*d[i][1]);
            if(m>res){
                res=m;
                k=i;
            }
        }
        return d[k][0]*d[k][1];
    }
};