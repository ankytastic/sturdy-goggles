class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for(int i=1;i<=s.size()/2;i++){
            if(s.size()%(i)==0){
                string k=s.substr(0,i);
                int j=0;
                string r="";
                for(j=0;j<s.size()/(i);j++){
                    r+=k;
                }
                if(r==s) return true;
            }
        }
        return false;
    }
};