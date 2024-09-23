class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        if(nums.size()<=2) return true;
        int i=1;
        while(i<nums.size() && (nums[i]-nums[i-1])==0){
            i++;
        }
        if (i == nums.size()) return true;
        bool k=nums[i]-nums[i-1]>0;
        for(;i<nums.size();i++){
            if(nums[i]-nums[i-1]==0) continue;
            bool s=nums[i]-nums[i-1]>0;
            if(k!=s) return false;
        }
        return true;
    }
};