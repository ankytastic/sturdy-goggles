class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        map<map<char,int>,vector<string>> s;
        for(int i=0;i<strs.size();i++){
            map<char,int> m;
            for(int j=0;j<strs[i].size();j++){
                m[strs[i][j]]++;
            }
            s[m].push_back(strs[i]);
        }
        for(auto k:s){
            res.push_back(k.second);
        }
        return res;
    }
};