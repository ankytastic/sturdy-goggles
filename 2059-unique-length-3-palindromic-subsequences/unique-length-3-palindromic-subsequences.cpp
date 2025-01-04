class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<char> uniC;
        // store all unique characters present in the string
        for (auto i : s) {
            uniC.insert(i);
        }
        
        // find the first and last occurrence of unique characters present in the string
        map<char, pair<int, int>> ran;
        for (auto j : uniC) {
            pair<int, int> r = {-1, -1}; // Initialize pair with invalid indices
            for (int i = 0; i < s.size(); i++) {
                if (j == s[i]) {
                    if (r.first == -1) { // First occurrence
                        r.first = i;
                    } else { // Last occurrence
                        r.second = i;
                    }
                }
            }
            // Only store if the character has at least 2 occurrences
            if (r.first != -1 && r.second != -1 && r.second - r.first >= 2) {
                ran[j] = r;
            }
        }
        
        int cnt = 0;
        for (auto i : ran) {
            // Store all the unique characters present in each range and then add the set size in the final count variable
            set<char> res;
            for (int j = i.second.first + 1; j < i.second.second; j++) {
                res.insert(s[j]);
            }
            cnt += res.size();
        }
        
        return cnt;
    }
};
