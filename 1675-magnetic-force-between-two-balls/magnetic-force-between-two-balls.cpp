class Solution {
public:
    bool pos(int min, vector<int>& p, int m) {
        int pre = p[0];
        int cou = 1;
        for (int i = 1; i < p.size(); i++) {
            int curr = p[i];
            if (curr - pre >= min) {
                cou++;
                pre = curr;
            }
            if (cou == m)
                break;
        }
        return cou == m;
    }
    int maxDistance(vector<int>& p, int m) {
        int n = p.size();
        sort(p.begin(), p.end());
        int minF = 1;
        int maxF = p[n - 1] - p[0];
        int res = 0;
        while (minF <= maxF) {
            int midF = minF + (maxF - minF) / 2;
            if (pos(midF, p, m)) {
                res = midF;
                minF = midF + 1;
            } else {
                maxF = midF - 1;
            }
        }
        return res;
    }
};