class Solution {
public:
    int maxScore(string s) {
        map<int,int> left;
        int m = INT_MIN;
        map<int,int> right;
        int c = 0;

        // Counting number of '0's from the left side
        for(int i = 0; i < s.size() - 1; i++) {  // Don't include the last character in the left part
            if(s[i] == '0') c++;
            left[i + 1] = c;  // Store the count of '0's from 0 to i
        }

        c = 0;
        // Counting number of '1's from the right side
        for(int i = s.size() - 1; i >= 1; i--) {  // Don't include the first character in the right part
            if(s[i] == '1') c++;
            right[s.size() - i] = c;  // Store the count of '1's from i to n-1
        }

        // Finding the maximum score by checking combinations
        for(int i = 1; i < s.size(); i++) {
            m = max(m, left[i] + right[s.size() - i]);
        }

        return m;
    }
};
