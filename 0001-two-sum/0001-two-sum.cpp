class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // Approach 1
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target){
        //             return {i,j};
        //         }
        //     }
        // }
        // return {};
        // Approach 2
        map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            int t=target-nums[i];
            if(mpp.find(t)!=mpp.end()){
                return {mpp[t],i};
            }
            mpp[nums[i]]=i;
        }
        return {};
    }
};