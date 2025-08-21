class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& n) {
        set<vector<int>> res;
        sort(n.begin(), n.end());
        for (int i = 0; i < n.size() - 2; i++) {
            int s = i + 1;
            int e = n.size() - 1;
            while (s < e) {
                int k = n[i] + n[s] + n[e];
                if (k == 0) {
                    res.insert({n[i], n[s], n[e]});
                    s++;
                    e--;
                } else if (k > 0) {
                    s++;
                } else {
                    e--;
                }
            }
        }
        vector<vector<int>> result;
        for (auto i : res) {
            result.push_back(i);
        }
        return result;
    }
};
        // Failed Approach 2
        // vector<vector<int>> res;
        // sort(n.begin(), n.end());
        // for (int i = 0; i < n.size() - 2; i++) {
        //     if (i > 0 && n[i] == n[i - 1])
        //         continue;
        //     int s = i + 1;
        //     int e = n.size() - 1;
        //     while (s < e) {
        //         int k = n[i] + n[s] + n[e];
        //         if (k == 0) {
        //             res.push_back({n[i], n[s], n[e]});
        //             s++;
        //             e--;
        //             while (s < e && n[s] == n[s - 1])
        //                 s++;
        //             while (s < e && n[e] == n[e + 1])
        //                 e--;
        //         } else if (k > 0) {
        //             s++;
        //         } else {
        //             e--;
        //         }
        //     }
        // }
        // return res;