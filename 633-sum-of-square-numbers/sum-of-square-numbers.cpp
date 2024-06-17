class Solution {
public:
    bool judgeSquareSum(int c) {
        vector<int> r;
        for(long long i = 0; i * i <= c; i++) {
            r.push_back(i * i);
        }
        int i = 0, j = r.size() - 1;
        while(i <= j) {
            long long k = (long long)r[i] + (long long)r[j];
            if(k > c) j--;
            else if(k < c) i++;
            else return true;
        }
        return false;
    }
};