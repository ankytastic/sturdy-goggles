class Solution {
public:
    int maxRepeating(string seq, string word) {
        int k = 0;
        string repeatedWord;
        while (true) {
            repeatedWord += word;
            k++;
            if (seq.find(repeatedWord) == string::npos) {
                break;
            }
        }
        return k - 1;
    }
};
