class Solution {
public:
    vector<int> twoSum(vector<int>& num, int target) {
        int i=0;
        int j=num.size()-1;
        while (i < j) {
            int res = num[i] + num[j];
            if (res == target) {
                return {i + 1, j + 1}; 
            } else if (res > target) {
                j--;
            } else {
                i++;
            }
        }
        return {}; 
    }
};