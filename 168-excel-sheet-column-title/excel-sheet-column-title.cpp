class Solution {
public:
    string ans(int n, string a){
        if(n<=26){
            return a+char('A'+n-1);
        }
        if(n%26==0){
            return ans(n/26-1, a)+ans(26, a);
        }
        return ans(n/26, a)+ans(n%26, a);
    }
    string convertToTitle(int c) {
        return ans(c,"");
    }
};