class Solution {
public:
    void bfs(int r,int c,vector<vector<char>>& grid,set<pair<int,int>>& visit){
        deque<pair<int,int>> line;
        visit.insert({r,c});
        line.push_back({r,c});
        vector<pair<int,int>> dir={{-1,0},{1,0},{0,1},{0,-1}};
        while(!line.empty()){
            auto cur=line.front();
            line.pop_front();
            int row=cur.first;
            int col=cur.second;
            for(auto dr:dir){
                int nr=row+dr.first;
                int nc=col+dr.second;
                if(nr>=0 && nr<grid.size() &&
                   nc>=0 && nc<grid[0].size() &&
                   grid[nr][nc]=='1' &&
                   visit.find({nr,nc})==visit.end()){
                    line.push_back({nr,nc});
                    visit.insert({nr,nc});
                }
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int rows=grid.size();
        int cols=grid[0].size();
        set<pair<int,int>> visit;
        int islands=0;
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(grid[i][j]=='1' && visit.find({i,j})==visit.end()){
                    bfs(i,j,grid,visit);
                    islands++;
                }
            }
        }
        return islands;
    }
};