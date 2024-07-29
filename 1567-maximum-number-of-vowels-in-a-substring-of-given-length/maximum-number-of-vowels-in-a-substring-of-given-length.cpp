class Solution {
public:
    int maxVowels(string s, int k) {
        int c=0;        
        int res=0;        
        int j=0;
        for(int i=0;i<s.size()-k+1;i++){
            while(j-i<k && j<s.size()){
                if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'){
                    c=c+1;
                }
                j++;
            }
            res=max(res,c);
            c=(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')?c-1:c;
        }
        return res;
    }
};