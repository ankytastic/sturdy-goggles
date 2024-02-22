class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int, int>> scoresWithIndex;
        for (int i = 0; i < score.size(); ++i) {
            scoresWithIndex.push_back({score[i], i});
        }
        sort(scoresWithIndex.rbegin(), scoresWithIndex.rend());
        vector<string> result(score.size());
        for (int i = 0; i < score.size(); ++i) {
            if (i == 0) {
                result[scoresWithIndex[i].second] = "Gold Medal";
            } else if (i == 1) {
                result[scoresWithIndex[i].second] = "Silver Medal";
            } else if (i == 2) {
                result[scoresWithIndex[i].second] = "Bronze Medal";
            } else {
                result[scoresWithIndex[i].second] = to_string(i + 1);
            }
        }
        return result;
    }
};