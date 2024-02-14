#include <unordered_map>

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> s_to_t;
        unordered_map<char, char> t_to_s;
        for (int i = 0; i < s.size(); ++i) {
            char s_char = s[i];
            char t_char = t[i];
            if (s_to_t.find(s_char) == s_to_t.end()) {
                s_to_t[s_char] = t_char;
            } else {
                if (s_to_t[s_char] != t_char) return false;
            }
            if (t_to_s.find(t_char) == t_to_s.end()) {
                t_to_s[t_char] = s_char;
            } else {
                if (t_to_s[t_char] != s_char) return false;
            }
        }
        return true;
    }
};
