class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        if (coordinates.size() < 2) return true;
        sort(coordinates.begin(),coordinates.end());
        int j=(coordinates[1][1]-coordinates[0][1]);
        int k=(coordinates[1][0]-coordinates[0][0]);
        for(int i=2;i<coordinates.size();i++){
            int m=(coordinates[i][1]-coordinates[i-1][1]);
            int n=(coordinates[i][0]-coordinates[i-1][0]);
            if(j*n!=k*m) return false;
        }
        return true;
    }
};