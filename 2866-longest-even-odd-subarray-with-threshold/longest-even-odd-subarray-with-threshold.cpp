class Solution {
public:
    int longestAlternatingSubarray(vector<int>& nums, int t) {
        int l=0;
        for(int i=0;i<nums.size();){
            if(nums[i]%2==0 && !(nums[i]>t)){
                int s=1;
                int p=0;
                cout<<nums[i]<<endl;
                i++;
                while(i<nums.size() && p!=nums[i]%2 && !(nums[i]>t)){
                    s++;
                    p=nums[i]%2;
                    i++;
                }
                if(i<nums.size() && p==nums[i]%2 && p==0) i--;
                l=max(l,s);
            }
            i++;
        }
        return l;
    }
};