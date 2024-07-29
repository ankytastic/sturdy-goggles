class Solution {
public:
    int maxArea(vector<int>& nums) {
        int q=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            int h=min(nums[i],nums[j]);
            q=max((h*(j-i)),q);
            if(nums[i]<nums[j]) i++;
            else j--;
        }
        return q;
    }
};