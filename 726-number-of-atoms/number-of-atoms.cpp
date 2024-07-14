class Solution {
public:
    string countOfAtoms(string f) {
        int n = f.length();
        stack<map<string,int>> st;
        st.push(map<string,int>());
        int i = 0;
        while (i < n) {
            if (f[i] == '(') {
                st.push(map<string,int>());
                i++;
            } else if (f[i] == ')') {
                map<string,int> currMap = st.top();
                st.pop();
                i++;
                string multiplier;
                while (i < f.length() && isdigit(f[i])) {
                    multiplier += f[i];
                    i++;
                }
                if (!multiplier.empty()) {
                    int mult = stoi(multiplier);
                    for (auto& [atom, count] : currMap) {
                        currMap[atom] = count * mult;
                    }
                }

                for (auto& [atom, count] : currMap) {
                    st.top()[atom] += count;
                }
            } else {
                string currAtom;
                currAtom += f[i];
                i++;
                while (i < f.length() && islower(f[i])) {
                    currAtom += f[i];
                    i++;
                }
                string currCount;
                while (i < f.length() && isdigit(f[i])) {
                    currCount += f[i];
                    i++;
                }
                int count = currCount.empty() ? 1 : stoi(currCount);
                st.top()[currAtom] += count;
            }
        }
        map<string, int> sortedMap(begin(st.top()), end(st.top()));
        string result;
        for (auto& [atom, count] : sortedMap) {
            result += atom;
            if (count > 1) {
                result += to_string(count);
            }
        }
        return result;
    }
};