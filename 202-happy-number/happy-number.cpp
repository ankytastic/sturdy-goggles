class Solution {
public:
    bool isHappy(int n) {
        if (n == 1) {
            return true;
        }
        unordered_set<int> seen;
        long long sum;
        while (true) {
            sum = 0;
            while (n > 0) {
                int rem = n % 10;
                sum += rem * rem;
                n /= 10;
            }
            if (sum == 1) {
                return true;
            } else if (seen.count(sum) > 0) {
                return false;
            }
            seen.insert(sum);
            n = sum;
        }
    }
};
