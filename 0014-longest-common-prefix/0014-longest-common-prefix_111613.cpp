class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string st=strs[0];
        string en=strs[n-1];
        string res="";
        for(int i=0; i<st.size(); i++){
            if(st[i]!=en[i]) break;
            res+=st[i];
        }
        return res;
    }
};