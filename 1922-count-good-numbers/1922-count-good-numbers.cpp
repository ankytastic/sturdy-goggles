class Solution {
private:
    const long long MOD = 1000000007;

public:
    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;
        long long first = powMod(5, even);
        long long second = powMod(4, odd);
        return static_cast<int>((first * second) % MOD);
    }

private:
    long long powMod(long long x, long long n) {
        if (n == 0) return 1;
        long long temp = powMod(x, n / 2);
        if (n % 2 == 0) {
            return (temp * temp) % MOD;
        } else {
            return (x * temp * temp) % MOD;
        }
    }
};