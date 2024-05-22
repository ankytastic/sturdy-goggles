class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2) return nums.size();
        int end=nums.size()-1;
        int prev=nums[0];
        int cou=1;
        for(int i=1;i<nums.size();i++){
            if(prev==nums[i]){
                cou++;
                if(cou>2){
                    nums.erase(nums.begin()+i);
                    i--;
                }
            }
            else{
                prev=nums[i];
                cou=1;
            }
        }
        return nums.size();
    }
};