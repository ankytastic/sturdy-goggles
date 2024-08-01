class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1 || s.length() <= numRows) {
            return s;
        }
        string res;
        int step = 2 * numRows - 2;
        for (int row = 0; row < numRows; row++) {
            for (int i = row; i < s.length(); i += step) {
                res += s[i];
                if (row > 0 && row < numRows - 1 &&
                    i + step - 2 * row < s.length()) {
                    res += s[i + step - 2 * row];
                }
            }
        }
        return res;
    }
};