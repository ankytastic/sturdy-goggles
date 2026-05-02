class Solution {
public:
    bool check(int x) {
        bool f = false;
        while (x > 0) {
            int d = x % 10;
            x /= 10;
            if (d == 3 || d == 4 || d == 7)
                return false;
            if (d == 2 || d == 5 || d == 6 || d == 9)
                f = true;
        }
        return f;
    }
    int rotatedDigits(int n) {
        int cou = 0;
        for (int i = 1; i <= n; i++) {
            if (check(i)) {
                cout << i;
                cou++;
            }
        }
        return cou;
    }
};