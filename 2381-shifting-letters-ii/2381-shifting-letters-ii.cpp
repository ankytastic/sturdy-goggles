class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        vector<int> r(s.size(), 0);

        // Apply shifts (accumulate them in r)
        for (int i = 0; i < shifts.size(); i++) {
            for (int j = shifts[i][0]; j <= shifts[i][1]; j++) {
                if (shifts[i][2] == 1) {
                    r[j] += 1;  // Shift right
                } else {
                    r[j] -= 1;  // Shift left
                }
            }
        }

        // Apply accumulated shifts to the string
        for (int i = 0; i < s.size(); i++) {
            int j = s[i] - 'a' + 26;  // Convert char to 0-25 range
            j += r[i];  // Apply the shift
            s[i] = char((j % 26) + 'a');  // Convert back to character
        }

        return s;
    }
};
