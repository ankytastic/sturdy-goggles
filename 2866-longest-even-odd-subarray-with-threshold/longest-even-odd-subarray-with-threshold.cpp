class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int threshold) {
        int n=nums.size();
        int best=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0) continue;
            if(nums[i]>threshold) continue;
            for(int j=i;j<n;j++){
                bool good=true;
                for(int k=i+1;k<j+1;k++){
                    if(nums[k]%2==nums[k-1]%2) good=false;
                    if(nums[k]>threshold) good=false;
                }
                if(good) best=max(best,j-i+1);
            }
        }
        return best;
    }
};