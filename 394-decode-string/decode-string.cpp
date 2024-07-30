class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        string currentString = "";
        int currentNum = 0;
        for (char c : s) {
            if (isdigit(c)) {
                currentNum = currentNum * 10 + (c - '0');
            } else if (c == '[') {
                st.push(currentString);
                st.push(to_string(currentNum));
                currentString = "";
                currentNum = 0;
            } else if (c == ']') {
                string numStr = st.top();
                st.pop();
                int num = stoi(numStr);
                string prevString = st.top();
                st.pop();
                string temp = "";
                for (int i = 0; i < num; i++) {
                    temp += currentString;
                }
                currentString = prevString + temp;
            } else {
                currentString += c;
            }
        }
        return currentString;
    }
};
