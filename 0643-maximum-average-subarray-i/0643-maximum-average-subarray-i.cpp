class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double r=INT_MIN;
        double sum=0;
        int j=0;
        cout<<nums.size();
        for(int i=0;i<nums.size()-k+1;i++){
            while(j-i<k && j<nums.size()){
                sum+=nums[j];
                j++;
            }
            r=max(r,sum/k);
            sum-=nums[i];
        }
        return r;
    }
};