class Solution {
public:
    int lis(int ind,int prev,vector<vector<int>> &r,int n,vector<int>& nums){
        if(ind==n) return 0;
        if(r[ind][prev+1]!=-1) return r[ind][prev+1];
        int log=lis(ind+1,prev,r,n,nums);
        if(prev==-1 || nums[ind]>nums[prev]){
            log=max(log,1+lis(ind+1,ind,r,n,nums));
        }
        return r[ind][prev+1]=log;
    }
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> r(n, vector<int>(n+1,-1));
        return lis(0,-1,r,n,nums);
    }
};