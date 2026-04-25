class Solution {
public:
    long long cal(vector<int>& nums,int s,int e){
        long long val=0;
        for(int i=s;i<=e;i++){
            val+=nums[i];
        }
        return val;
    }

    int compareBitonicSums(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int peak=0;
        while(l < r){
            int m = l + (r - l) / 2;
            if(nums[m] < nums[m+1]){
                l = m + 1;
            } else {
                r = m;
            }
        }
        peak = l;

        long long left = cal(nums,0,peak);
        long long right = cal(nums,peak,n-1);

        if(left > right) return 0;
        if(left == right) return -1;
        return 1;
    }
};