class Solution {
public:
    int findPermutationDifference(string s, string t) {
        map<char,int> mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]=i;
        }
        int cou=0;
        for(int i=0;i<t.size();i++){
            cou+=abs(mpp[t[i]]-i);
        }
        return cou;
    }
};