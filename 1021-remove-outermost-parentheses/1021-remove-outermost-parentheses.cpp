class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string ans = "";
        int start = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (st.empty()) {
                    start = i + 1;
                }
                st.push(s[i]);
            } else {
                st.pop();
                if (st.empty()) {
                    ans += s.substr(start, i - start);
                }
            }
        }
        return ans;
    }
};
