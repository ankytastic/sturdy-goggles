class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int l=0;
        int r=nums.size()-1;
        while(l<r){
            if(nums[l]==(-1)*nums[r]) return nums[r];
            if((-1)*nums[l]>nums[r]) l++;
            else r--;
        }
        return -1;
    }
};