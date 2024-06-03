class Solution {
public:
    int minimumChairs(string s) {
        int cou=0;
        int maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='E'){
                cou++;
            }
            else{
                cou--;
            }
            maxi=max(cou,maxi);
        }
        return maxi;
    }
};