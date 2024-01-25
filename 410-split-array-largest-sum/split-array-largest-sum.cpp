class Solution {
public:
    int stuCou(vector<int>& nums,long long mid){
        int cnt=1;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]<=mid){
                sum+=nums[i];
            }
            else{
                cnt++;
                sum=nums[i];
            }
        }
        return cnt;
    }
    int splitArray(vector<int>& nums, int k) {
        long long maxi=INT_MIN;
        long long sumi=0;
        int n=nums.size();
        if(n<k) return -1;
        for(int i=0;i<n;i++){
            maxi=max(maxi,(long long)(nums[i]));
            sumi+=nums[i];
        }
        if(n==k) return maxi;
        long long low=maxi,high=sumi;
        int ans=0;
        while(low<=high){
            long long mid=low+(high-low)/2;
            int cou=stuCou(nums,mid);
            if(cou<=k){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};