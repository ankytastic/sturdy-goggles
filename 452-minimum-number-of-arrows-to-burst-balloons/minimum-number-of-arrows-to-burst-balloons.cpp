class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& i) {
        if (i.size() == 1)
            return 1;
        sort(i.begin(), i.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });
        vector<vector<int>> r;
        vector<int> curr = i[0];
        for (int j = 1; j < i.size(); j++) {
            if (i[j][0] <= curr[1]) {
                curr[0] = max(curr[0], i[j][0]);
                curr[1] = min(curr[1], i[j][1]);
            } else {
                r.push_back(curr);
                curr = i[j];
            }
        }
        r.push_back(curr);
        return r.size();
    }
};
