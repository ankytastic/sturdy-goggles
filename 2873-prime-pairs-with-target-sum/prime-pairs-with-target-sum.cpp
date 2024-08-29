class Solution {
public:
    vector<int> S(int n) {
        bool prime[n + 1];
        memset(prime, true, sizeof(prime));
        for (int p = 2; p * p <= n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i <= n; i += p)
                    prime[i] = false;
            }
        }
        vector<int> r;
        for (int p = 2; p <= n; p++) {
            if (prime[p]) {
                r.push_back(p);
            }
        }
        return r;
    }
    vector<vector<int>> findPrimePairs(int n) {
        vector<vector<int>> res;
        vector<int> primes=S(n);
        if (n <= 2)
            return res;
        for(int i=0;i<primes.size();i++){
            if(primes[i]>(n/2+1)) break;
            int k=n-primes[i];
            bool it=binary_search(primes.begin(), primes.end(), k);
            if(it){
                res.push_back({primes[i],k});
                primes[i]=-1;
            }
        }
        return res;
    }
};