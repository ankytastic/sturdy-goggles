class Solution {
public:
    void dfs(unordered_map<int,vector<int>>& adj, int u, vector<bool>& visit){
        visit[u]=true;
        for(auto v:adj[u]){
            if(!visit[v]){
                dfs(adj,v,visit);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        vector<bool> visit(n,false);
        unordered_map<int,vector<int>> adj;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(isConnected[i][j]){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                dfs(adj,i,visit);
                count++;
            }
        }
        return count;
    }
};