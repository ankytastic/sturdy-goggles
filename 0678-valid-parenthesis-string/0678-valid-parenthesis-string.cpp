class Solution {
public:
    bool checkValidString(string s) {
        int cou1=0,cou2=0,cou3=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') cou1++;
            if(s[i]==')') cou2++;
            if(s[i]=='*') cou3++;
        }
        if(cou1==cou2) return true;
        if(cou1>cou2){
            if(cou2+cou3>=cou1){
                return true;
            }
            return false;
        }
        if(cou1<cou2){
            if(cou1+cou3>=cou2){
                return true;
            }
            return false;
        }
        return true;
    }
};