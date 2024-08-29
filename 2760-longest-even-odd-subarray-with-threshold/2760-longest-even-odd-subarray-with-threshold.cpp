class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int t) {
        int l=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0 && nums[i]<=t){
                int s=1;
                int p=0;
                i++;
                while(i<nums.size() && p!=nums[i]%2 && nums[i]<=t){
                    s++;
                    p=nums[i]%2;
                    i++;
                }
                l=max(l,s);
            }
        }
        return l;
    }
};