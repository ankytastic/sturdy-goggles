class Solution {
public:
    string largestPalindromic(string num) {
        vector<int> freq(10, 0);
        for (char c : num)
            freq[c - '0']++;
        string left = "";
        for (int d = 9; d >= 1; d--) {
            left += string(freq[d] / 2, char('0' + d));
            freq[d] %= 2;
        }
        if (!left.empty()) {
            left += string(freq[0] / 2, '0');
            freq[0] %= 2;
        }
        string mid = "";
        for (int d = 9; d >= 0; d--) {
            if (freq[d]) {
                mid = char('0' + d);
                break;
            }
        }
        string right = left;
        reverse(right.begin(), right.end());
        string result = left + mid + right;
        return result.empty() ? "0" : result;
    }
};