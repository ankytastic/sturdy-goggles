class Solution {
public:
    int numSteps(string s) {
        unsigned long long int r = 0;
        for (int i = 0; i < s.size(); i++) {
            r = r * 2 + (s[i] - '0');
        }
        int steps = 0;
        while (r != 1) {
            if (r % 2 == 0) {
                r /= 2;
            } else {
                r += 1;
            }
            steps++;
        }
        return steps;
    }
};