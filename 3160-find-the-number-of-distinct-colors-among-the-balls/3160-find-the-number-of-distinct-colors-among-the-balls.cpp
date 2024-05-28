class Solution {
public:
    int couCol(map<int,int>& mpp){
        set<int> st;
        for(auto m:mpp){
            if(m.second>0) st.insert(m.second);
        }
        return st.size();
    }
    vector<int> queryResults(int limit, vector<vector<int>>& queries) {
        map<int,int> mpp;
        for(int i=0;i<limit+1;i++){
            mpp[i]=0;
        }
        vector<int> res;
        for(int i=0;i<queries.size();i++){
            mpp[queries[i][0]]=queries[i][1]+1;
            res.push_back(couCol(mpp));
        }
        return res;
    }
};