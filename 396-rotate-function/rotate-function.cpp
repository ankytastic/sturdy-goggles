class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int sum=0;
        int res=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=i*nums[i];
            res+=nums[i];
        }
        int f=sum;
        // cout<<res<<endl<<sum<<endl;
        int curr=sum;
        for(int i=1;i<n;i++){
            int k=curr+res-((n)*nums[n-i]);
            // cout<<k<<endl;
            curr=k;
            f=max(f,curr);
        }
        return f;
    }
};