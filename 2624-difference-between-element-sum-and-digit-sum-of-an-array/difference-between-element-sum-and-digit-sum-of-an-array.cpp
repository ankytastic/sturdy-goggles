class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int elesum=0,digsum=0;
        for(int i=0;i<nums.size();i++){
            elesum+=nums[i];
        }
        for(int i=0;i<nums.size();i++){
            int r=nums[i];
            while(r>0){
                digsum+=r%10;
                r=r/10;
            }
        }
        return abs(digsum-elesum);
    }
};