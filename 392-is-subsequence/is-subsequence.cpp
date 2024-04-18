class Solution {
public:
    bool isSubsequence(string s, string t) {
        int a = 0;
        int b = 0;
        while (b < t.length()) {
            if (s[a] == t[b]) {
                b++;
                a++;
            } else {
                b++;
            }
        }
        if (a == s.length())
            return true;
        else
            return false;
    }
};