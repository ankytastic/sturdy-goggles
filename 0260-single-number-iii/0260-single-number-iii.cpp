class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        if(nums.size() == 2) return nums;
        
        long long xory = 0;
        for(auto i : nums) {
            xory ^= i;
        }
        
        long long righty = xory & -xory; 
        
        int b1 = 0, b2 = 0;
        for(auto i : nums) {
            if(i & righty) {
                b1 ^= i;
            } else {
                b2 ^= i;
            }
        }
        
        return {b1, b2};
    }
};