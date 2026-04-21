class Solution {
public:
    int compress(vector<char>& chars) {
        int writeIdx = 0;
        int count = 1;
        for (int i = 1; i <= chars.size(); i++) {
            if (i < chars.size() && chars[i] == chars[i-1]) {
                count++;
            } else {
                chars[writeIdx++] = chars[i-1];

                if (count > 1) {
                    string s = to_string(count);
                    for (char c : s) chars[writeIdx++] = c;
                }

                count = 1;
            }
        }

        return writeIdx;
    }
};