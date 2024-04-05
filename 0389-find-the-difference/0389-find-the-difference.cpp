class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char, int> count;
        for (char ch : s) {
            count[ch]++;
        }
        for (char ch : t) {
            if (count[ch] == 0) {
                return ch;
            } else {
                count[ch]--;
            }
        }
        return '\0';
    }
};
