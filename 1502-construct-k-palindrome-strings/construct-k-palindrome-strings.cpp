class Solution {
public:
    bool canConstruct(string s, int k) {
        if(k==s.size()) return true;
        if(k>s.size()) return false;
        map<char,int> m;
        for(auto i:s){
            m[i]++;
        }
        int r=0;
        for(auto i:m){
            if(i.second%2) r++;
        }
        return (r <= k);
    }
};