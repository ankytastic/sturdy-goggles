class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int ans = 0;
        int n = nums.size();
        int noOfSubsets = 1<<n;
        for(int i=0;i<noOfSubsets;i++){
            int xo = 0;
            for(int j=0;j<n;j++){
                if((i&(1<<j))){
                    xo^=nums[j];
                }
            }
            ans+=xo;
        }
        return ans;    
    }
};