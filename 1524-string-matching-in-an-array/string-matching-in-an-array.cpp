class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> result;
        
        // Loop through each word in the array
        for (int i = 0; i < words.size(); ++i) {
            // Check if this word is a substring of any other word
            for (int j = 0; j < words.size(); ++j) {
                // Skip if it's the same word
                if (i != j && words[j].find(words[i]) != string::npos) {
                    result.push_back(words[i]);
                    break; // No need to check further once we find a match
                }
            }
        }
        
        return result;
    }
};