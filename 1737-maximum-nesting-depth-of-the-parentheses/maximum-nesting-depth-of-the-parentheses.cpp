class Solution {
public:
    int maxDepth(string s) {
        int cou=0,maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') cou++;
            else if(s[i]==')'){
                maxi=max(cou,maxi);
                cou--;
            }
        }
        return maxi;
    }
};