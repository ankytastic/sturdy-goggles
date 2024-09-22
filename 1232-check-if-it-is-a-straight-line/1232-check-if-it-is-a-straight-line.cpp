class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        sort(coordinates.begin(),coordinates.end());
        int j=(coordinates[1][1]-coordinates[0][1]);
        int k=(coordinates[1][0]-coordinates[0][0]);
        if(k!=0) int j=j/k;
        for(int i=2;i<coordinates.size();i++){
            int m=(coordinates[i][1]-coordinates[i-1][1]);
            int n=(coordinates[i][0]-coordinates[i-1][0]);
            if(n!=0){
                m=m/n;
            }
            if(m!=j) return false;
        }
        return true;
    }
};