class Solution {
public:
    void dfset(vector<vector<int>>& rooms,int source,vector<int> &visit){
        visit[source]=1;
        for(auto n:rooms[source]){
            if(!visit[n]){
                dfset(rooms,n,visit);
            }
        }
        return ;
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<int> visit(rooms.size(),0);
        dfset(rooms,0,visit);
        for(auto i:visit){
            if(i==0) return false;
        }
        return true;
    }
};