class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int n=nums.size();
        int maxEl=*max_element(nums.begin(),nums.end());
        vector<int> cou(n+maxEl,0);
        for(int &num: nums)
            cou[num]++;
        int mov=0;
        for(int i=0;i<n+maxEl;i++){
            if(cou[i]<=1)
                continue;
            int ext=cou[i]-1;
            cou[i+1]+=ext;
            cou[i]=1;
            mov+=ext;
        }
        return mov;
    }
};