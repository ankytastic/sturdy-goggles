class Solution {
public:
    int balancedStringSplit(string s) {
        int cou=0;
        int couL=0;
        int couR=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='L') couL+=1;
            if(s[i]=='R') couR+=1;
            if(couL==couR){
                couL=0;
                couR=0;
                cou+=1;
            }
        }
        return cou;
    }
};