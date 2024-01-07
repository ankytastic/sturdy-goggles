class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int suffi=1,prefi=1;
        int maxi=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(suffi==0) suffi=1;
            if(prefi==0) prefi=1;
            suffi*=nums[i];
            prefi*=nums[n-1-i];
            maxi=max(maxi,max(suffi,prefi));
        }
        return maxi;
    }
};