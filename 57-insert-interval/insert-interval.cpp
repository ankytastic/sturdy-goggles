class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& i, vector<int>& newInterval) {
        i.push_back(newInterval);
        if (i.size() == 1)
            return i;
        sort(i.begin(), i.end(),
             [](const vector<int>& a, const vector<int>& b) {
                 return a[0] < b[0];
             });
        vector<vector<int>> r;
        vector<int> curr = i[0];
        for (int j = 1; j < i.size(); j++) {
            if (curr[1] >= i[j][0]) {
                curr[1] = max(curr[1], i[j][1]);
            } else {
                r.push_back(curr);
                curr = i[j];
            }
        }
        r.push_back(curr);
        return r;
    }
};