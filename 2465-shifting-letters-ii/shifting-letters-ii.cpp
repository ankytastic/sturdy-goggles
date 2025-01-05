class Solution {
public:
    string shiftingLetters(string s, vector<vector<int>>& shifts) {
        int n = s.size();
        vector<int> r(n + 1, 0);  // r will store the prefix sums of shifts
        
        // Apply the shifts in a difference array manner
        for (const auto& shift : shifts) {
            int start = shift[0], end = shift[1], direction = shift[2];
            if (direction == 1) {
                r[start] += 1;  // Increase shift at start
                if (end + 1 < n) r[end + 1] -= 1;  // Decrease shift after end
            } else {
                r[start] -= 1;  // Decrease shift at start
                if (end + 1 < n) r[end + 1] += 1;  // Increase shift after end
            }
        }
        
        // Compute the prefix sum to get the final shift for each character
        int curr_shift = 0;
        for (int i = 0; i < n; i++) {
            curr_shift += r[i];  // This is the total shift for the character at index i
            
            // Apply the shift to the character using modulo 26 for circular alphabet
            int new_char = (s[i] - 'a' + curr_shift) % 26;
            if (new_char < 0) {
                new_char += 26;  // To ensure no negative values (handle large negative shifts)
            }
            s[i] = char(new_char + 'a');
        }

        return s;
    }
};
