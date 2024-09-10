class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        set<char> st;
        for(auto s:jewels){
            st.insert(s);
        }
        int c=0;
        for(auto p:stones){
            auto pos=st.find(p);
            if (pos != st.end()){
                c++;
            }
        }
        return c;
    }
};