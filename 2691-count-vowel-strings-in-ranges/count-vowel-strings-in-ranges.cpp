class Solution {
public:
    bool checkVow(const string& str) {
        // Check if the first and last character are vowels
        const string vowels = "aeiou";
        return (vowels.find(str[0]) != string::npos) && (vowels.find(str[str.size() - 1]) != string::npos);
    }

    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        // Preprocess to store if a word is a vowel string
        int n = words.size();
        vector<bool> isVowelString(n, false);
        
        for (int i = 0; i < n; ++i) {
            isVowelString[i] = checkVow(words[i]);
        }

        // Create a prefix sum array to quickly answer range queries
        vector<int> prefixSum(n + 1, 0);
        for (int i = 0; i < n; ++i) {
            prefixSum[i + 1] = prefixSum[i] + isVowelString[i];
        }

        // Answer the queries using the prefix sum array
        vector<int> res;
        for (const auto& query : queries) {
            int left = query[0], right = query[1];
            // The count of vowel strings in the range [left, right] is the difference in the prefix sum
            res.push_back(prefixSum[right + 1] - prefixSum[left]);
        }

        return res;
    }
};
