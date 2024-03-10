class Solution {
public:
    int myAtoi(std::string s) {
        long long val = 0;
        int i = 0;
        int sign = 1;
        int n = s.length();
        while (i < n && s[i] == ' ') {
            i++;
        }
        if (s[i] == '-' || s[i] == '+') {
            sign = (s[i++] == '-') ? -1 : 1;
        }
        while (i < n && isdigit(s[i])) {
            int digit = s[i++] - '0';
            if (val > (INT_MAX - digit) / 10) {
                return (sign == 1) ? INT_MAX : INT_MIN;
            }
            val = val * 10 + digit;
        }

        return sign * val;
    }
};