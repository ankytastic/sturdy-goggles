class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<float> r;
        int i=0;
        while(i<(nums.size()/2)){
            float k=nums[i]+nums[nums.size()-1-i];
            r.push_back(k/2);
            i++;
        }
        sort(r.begin(),r.end());
        return r[0];
    }
};