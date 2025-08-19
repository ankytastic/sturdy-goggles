class Solution {
public:
    bool isSubsequence(string s, string t) {
        if (s.size() == 0)
            return true;
        if (s.size() > t.size())
            return false;
        int sCurr = 0;
        int tCurr = 0;
        while (tCurr < t.size()) {
            if (s[sCurr] == t[tCurr]) {
                sCurr++;
                if (sCurr == s.size())
                    return true;
            }
            tCurr++;
        }
        return false;
    }
};