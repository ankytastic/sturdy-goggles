class Solution {
public:
    int romanToInt(string s) {
        int num = 0;
        unordered_map<char, int> mpp = {{'I', 1},   {'V', 5},   {'X', 10},
                                        {'L', 50},  {'C', 100}, {'D', 500},
                                        {'M', 1000}};
        for (int i = 0; i < s.size() - 1; i++) {
            if (mpp[s[i]] >= mpp[s[i + 1]]) {
                num += mpp[s[i]];
            } else {
                num -= mpp[s[i]];
            }
        }
        num += mpp[s.back()];
        return num;
    }
};