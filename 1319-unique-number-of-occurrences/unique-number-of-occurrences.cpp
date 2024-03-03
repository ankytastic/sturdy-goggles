class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int, int> cou;
        for (int num : arr) {
            cou[num]++;
        }
        set<int> occurrences;
        for (const auto& kv : cou) {
            if (occurrences.count(kv.second)) {
                return false;
            }
            occurrences.insert(kv.second);
        }
        return true;
    }
};
