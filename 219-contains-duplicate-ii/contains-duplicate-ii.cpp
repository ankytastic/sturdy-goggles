class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        map<int,vector<int>> m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]].push_back(i);
        }
        for(auto mpp:m){
            if(mpp.second.size()>=2){
                for(int i=0;i<mpp.second.size()-1;i++){
                    for(int j=i+1;j<mpp.second.size();j++){
                        if(abs(mpp.second[i]-mpp.second[j])<=k) return true;
                    }
                }
            }
        }
        return false;
    }
};