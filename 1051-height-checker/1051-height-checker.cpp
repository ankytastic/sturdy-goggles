class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> v=heights;
        sort(v.begin(),v.end());
        int cou=0;
        for(int i=0;i<v.size();i++){
            if(v[i]!=heights[i]) cou++;
        }
        return cou;
    }
};