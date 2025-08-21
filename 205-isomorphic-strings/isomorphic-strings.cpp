class Solution {
public:
    vector<int> charmap(string s){
        vector<int> pos;
        map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            if(mpp.find(s[i])==mpp.end()) mpp[s[i]]=i;
            pos.push_back(mpp[s[i]]);
        }
        return pos;
    }
    bool isIsomorphic(string s, string t) {
        if(s.size()!=t.size()) return false;
        return charmap(s)==charmap(t);
    }
};