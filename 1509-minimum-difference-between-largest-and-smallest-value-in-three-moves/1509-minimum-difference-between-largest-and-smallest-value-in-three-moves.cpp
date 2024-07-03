class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        for(int i=n-1;i>=0 && i>=n-3;i--){
            nums[i]=nums[0];
        }
        sort(nums.begin(),nums.end());
        return nums[nums.size()-1]-nums[0];
    }
};