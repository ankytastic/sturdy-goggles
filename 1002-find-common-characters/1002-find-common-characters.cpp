class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        if (words.empty()) return {};
        
        vector<int> count(26, INT_MAX);
        for (const string& word : words) {
            vector<int> wordCount(26, 0);
            for (char c : word) {
                wordCount[c - 'a']++;
            }
            for (int i = 0; i < 26; i++) {
                count[i] = min(count[i], wordCount[i]);
            }
        }
        
        vector<string> result;
        for (int i = 0; i < 26; i++) {
            while (count[i] > 0) {
                result.push_back(string(1, 'a' + i));
                count[i]--;
            }
        }
        
        return result;
    }
};