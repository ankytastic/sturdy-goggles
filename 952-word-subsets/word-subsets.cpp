class Solution {
public:
    vector<int> getMaxFrequency(vector<string>& words2) {
        vector<int> maxFreq(26, 0);
        for (auto& word : words2) {
            vector<int> freq(26, 0);
            for (char c : word) {
                freq[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                maxFreq[i] = max(maxFreq[i], freq[i]);
            }
        }
        return maxFreq;
    }

    bool isUniversal(string& word, vector<int>& maxFreq) {
        vector<int> freq(26, 0);
        for (char c : word) {
            freq[c - 'a']++;
        }
        for (int i = 0; i < 26; i++) {
            if (freq[i] < maxFreq[i]) {
                return false;
            }
        }
        return true;
    }

    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> maxFreq = getMaxFrequency(words2);
        vector<string> result;
        for (auto& word : words1) {
            if (isUniversal(word, maxFreq)) {
                result.push_back(word);
            }
        }
        return result;
    }
};
