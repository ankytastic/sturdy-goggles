class Solution {
public:
    bool canBeValid(string s, string locked) {
        if (s.size() % 2 != 0) return false;        
        int n = s.size();
        int min_open = 0, max_open = 0;
        for (int i = 0; i < n; i++) {
            if (locked[i] == '0') {
                min_open = max(0, min_open - 1); 
                max_open++;
            } else if (s[i] == '(') {
                min_open++;
                max_open++;
            } else {
                min_open = max(0, min_open - 1);
                max_open--;
            }
            if (max_open < 0) return false;
        }
        if (min_open > 0) return false;
        min_open = 0, max_open = 0;
        for (int i = n - 1; i >= 0; i--) {
            if (locked[i] == '0') {
                min_open = max(0, min_open - 1);
                max_open++;
            } else if (s[i] == ')') {
                min_open++;
                max_open++;
            } else {
                min_open = max(0, min_open - 1);
                max_open--;
            }
            if (max_open < 0) return false;
        }        
        return min_open == 0;
    }
};
