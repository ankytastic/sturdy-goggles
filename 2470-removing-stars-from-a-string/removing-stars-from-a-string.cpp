class Solution {
public:
    string removeStars(string s) {
        string st;
        for(auto k:s){
            if(k=='*'){
                st.pop_back();
            }else{
                st+=k;
            }
        }
        return st;
    }
};