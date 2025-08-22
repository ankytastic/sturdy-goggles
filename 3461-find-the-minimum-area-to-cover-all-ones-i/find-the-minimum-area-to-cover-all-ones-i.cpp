class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        vector<int> row;
        vector<int> col;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        sort(row.begin(),row.end());
        sort(col.begin(),col.end());
        return (row.back()-row.front()+1)*(col.back()-col.front()+1);
    }
};