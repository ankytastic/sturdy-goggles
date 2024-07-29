class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int len = 0;
        int j = 0;
        int c = 0;        
        for (int i = 0; i < nums.size(); i++) {
            while (j < nums.size() && (c < k || (c == k && nums[j] == 1))) {
                if (nums[j] == 0) {
                    c++;
                }
                j++;
            }
            len = max(len, (j - i));
            c = (nums[i] == 0) ? c - 1 : c;
        }        
        return len;        
    }
};