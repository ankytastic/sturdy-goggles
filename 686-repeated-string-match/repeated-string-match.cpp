class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string repeatedA = a;

        while (repeatedA.length() < b.length()) {
            repeatedA += a;
            count++;
        }

        if (repeatedA.find(b) != string::npos) {
            return count;
        }

        repeatedA += a;
        count++;

        if (repeatedA.find(b) != string::npos) {
            return count;
        }

        return -1;
    }
};