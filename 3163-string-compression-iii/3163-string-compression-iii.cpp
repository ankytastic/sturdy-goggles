class Solution {
public:
    string compressedString(string word) {
        map<char, int> mpp;
        for (auto w : word) {
            mpp[w]++;
        }
        string res = "";
        for (auto m : mpp) {
            if (m.second < 10)
                res += to_string(m.second) + m.first;
            else {
                while (m.second > 9) {
                    m.second -= 9;
                    res += to_string(9) + m.first;
                }
                res += to_string(m.second) + m.first;
            }
        }
        return res;
    }
};