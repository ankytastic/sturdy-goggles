class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        map<int,vector<int>> mpp;
        for(int i=0;i<grid[0].size();i++){
            for(int j=0;j<grid.size();j++){
                mpp[i].push_back(grid[j][i]);
            }
        }
        int cou=0;
        for(int i=0;i<grid.size();i++){
            for(auto m:mpp){
                if(grid[i]==m.second) cou++;
            }
        }
        return cou;
    }
};