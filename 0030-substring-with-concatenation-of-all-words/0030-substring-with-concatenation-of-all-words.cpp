class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        int num_words = words.size();
        int sizeofeach = words[0].size();
        vector<int> ans;
        int stringlen = s.length();
        int wordlength = num_words * sizeofeach;
        if (stringlen < wordlength) {
            return ans;
        }
        unordered_map<string, int> word_count;
        for (string w : words) {
            word_count[w]++;
        }
        for (int i = 0; i < sizeofeach;i++) { 
            int left = i, count = 0;
            unordered_map<string, int> seen;
            for (int j = i; j <= stringlen - sizeofeach; j += sizeofeach) {
                string word = s.substr(j, sizeofeach);
                if (word_count.find(word) != word_count.end()) {
                    seen[word]++;
                    count++;
                    while (seen[word] > word_count[word]) {
                        string left_word = s.substr(left, sizeofeach);
                        seen[left_word]--;
                        count--;
                        left += sizeofeach;
                    }
                    if (count == num_words) {
                        ans.push_back(left);
                    }
                } else {
                    seen.clear();
                    count = 0;
                    left = j + sizeofeach;
                }
            }
        }
        return ans;
    }
};