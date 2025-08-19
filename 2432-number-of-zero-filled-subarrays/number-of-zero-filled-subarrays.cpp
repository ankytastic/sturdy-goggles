class Solution {
public:
    long long zeroFilledSubarray(vector<int>& n) {
        long long cou = 0;
        long long curr = 0;
        for (int num : n) {
            if (num == 0) {
                curr++;
                cou+=curr;
            } else{
                curr = 0;
            }
        }
        return cou;
    }
};