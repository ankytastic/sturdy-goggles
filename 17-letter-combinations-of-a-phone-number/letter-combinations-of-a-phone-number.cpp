class Solution {
public:
    vector<string> letterCombinations(string digits) {
        if (digits.empty()) {
            return {};
        }
        vector<string> res;
        unordered_map<char, string> digitToChar = {
            {'2', "abc"}, {'3', "def"},  {'4', "ghi"}, {'5', "jkl"},
            {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};
        backtrack(0, digits, "", res, digitToChar);
        return res;
    }

    void backtrack(int i, string& digits, string curStr, vector<string>& res,
unordered_map<char, string>& digitToChar) {
        if (i == digits.size()) {
            res.push_back(curStr);
            return;
        }

        for (char c : digitToChar[digits[i]]) {
            backtrack(i + 1, digits, curStr + c, res, digitToChar);
        }
    }
};