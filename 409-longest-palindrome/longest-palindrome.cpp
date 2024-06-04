class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> mpp;
        for(auto st: s){
            mpp[st]++;
        }
        int cou=0;
        bool isOdd=false;
        for(auto st:mpp){
            if(st.second%2==0){
                cou+=st.second;
            }
            else{
                cou+=st.second-1;
                isOdd=true;
            }
        }
        return cou+isOdd;
    }
};