class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> n(26, 0);
        for (char c : s) {
            n[c - 'a']++;
        }
        for (int i = 0; i < s.size(); i++) {
            if (n[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};
