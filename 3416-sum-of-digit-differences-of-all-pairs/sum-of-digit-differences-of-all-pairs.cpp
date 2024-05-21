class Solution {
public:
    unordered_map<int, unordered_map<char, long long>> mp;

    void count(int el) {
        string s = to_string(el);
        for (int i = 0; i < s.size(); i++) {
            mp[i][s[i]]++;
        }
        return;
    }

    long long sumDigitDifferences(vector<int>& nums) {
        int n = nums.size();
        for (auto el : nums)
            count(el);
        long long ans = 0;
        for (auto el : nums) {
            string s = to_string(el);
            for (int j = 0; j < s.size(); j++) {
                char c = s[j];
                ans += (n * 1ll) - (mp[j][c]);
            }
        }
        return ans / 2;
    }
};