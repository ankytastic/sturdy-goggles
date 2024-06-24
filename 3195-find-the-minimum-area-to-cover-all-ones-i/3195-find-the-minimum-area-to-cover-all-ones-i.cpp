class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        vector<pair<int,int>> r;
        vector<pair<int,int>> s;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[i].size();j++){
                r.push_back({i,j});
                s.push_back({j,i});
            }
        }
        sort(r.begin(),r.end());
        sort(s.begin(),s.end());
        if(r.size()==1) return 1;
        int k=r[r.size()-1].first-r[0].first;
        int l=s[s.size()-1].first-s[0].first+1;
        return k*l;
    }
};