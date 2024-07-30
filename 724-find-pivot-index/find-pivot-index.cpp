class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int startsum=0;
        int totsum=0;
        for(int n:nums){
            totsum+=n;
        }
        for(int n=0;n<nums.size();n++){
            if(2*startsum==totsum-nums[n]) return n;
            startsum+=nums[n]; 
        }
        return -1;
    }
};