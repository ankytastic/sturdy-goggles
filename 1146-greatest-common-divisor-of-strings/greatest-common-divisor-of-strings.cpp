class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1==str2) return str1;
        string div="";
        if((str1+str2)==(str2+str1)){
            int len=__gcd(str1.size(),str2.size());
            div=str1.substr(0,len);
        }
        return div;
    }
};