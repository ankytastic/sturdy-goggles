class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        set<vector<int>> res;
        sort(n.begin(), n.end());

        for (int i = 0; i < n.size() - 2; i++) {
            int s = i + 1;
            int e = n.size() - 1;

            while (s < e) {
                int sum = n[i] + n[s] + n[e];

                if (sum == 0) {
                    res.insert({n[i], n[s], n[e]});
                    s++;
                    e--;
                } else if (sum < 0) {
                    s++;
                } else {
                    e--;
                }
            }
        }

        vector<vector<int>> result(res.begin(), res.end());
        return result;
    }
};
