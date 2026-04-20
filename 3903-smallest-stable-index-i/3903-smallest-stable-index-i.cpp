class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int> maxs;
        vector<int> mins;
        int n=nums.size();
        int s=INT_MIN;
        for(int i=0;i<nums.size();i++){
            s=max(s,nums[i]);
            // cout<<s<<endl;
            maxs.push_back(s);
        }
        s=INT_MAX;
        for(int i=n-1;i>=0;i--){
            s=min(s,nums[i]);
            // cout<<s<<endl;
            mins.push_back(s);
        }
        reverse(mins.begin(),mins.end());
        for(int i=0;i<n;i++){
            // cout<<maxs[i]<<" "<<mins[i]<<endl;
            int d=maxs[i]-mins[i];
            if(d<=k){
                return i;
            }
        }
        return -1;
    }
};