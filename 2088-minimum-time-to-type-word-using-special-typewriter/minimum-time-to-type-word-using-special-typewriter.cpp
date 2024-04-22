class Solution {
public:
    int minTimeToType(string word) {
        int n = word.size();
        int count = 0;
        count += min((word[0] - 'a' + 26) % 26, ('a' - word[0] + 26) % 26);  
        for (int i = 1; i < n; ++i) {
            int rem = (word[i] - word[i - 1] + 26) % 26; 
            count += min(rem, (26 - rem) % 26);
        }
        count += n;
        return count;
    }
};