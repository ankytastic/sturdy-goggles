class Solution {
public:
    string largestGoodInteger(string num) {
        int cur = -1;
        for (int i = 0; i <= num.size() - 3; i++) {
            if (num[i] == num[i + 1] && num[i] == num[i + 2]) {
                int digit = num[i] - '0';
                cur = max(cur, digit);
            }
        }
        if (cur == -1) return "";
        string c = to_string(cur);
        return c + c + c;
    }
};
