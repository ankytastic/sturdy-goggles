class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        multimap<int, char, greater<int>> sortedFreq;
        for (auto& pair : freq) {
            sortedFreq.insert({pair.second, pair.first});
        }
        string sortedString;
        for (auto& pair : sortedFreq) {
            for (int i = 0; i < pair.first; i++) {
                sortedString.push_back(pair.second);
            }
        }
        return sortedString;
    }
};