class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> r;
        r.push_back(0);
        int curr=0;
        int maxi=0;
        for(int i=0;i<gain.size();i++){
            curr+=gain[i];
            maxi=max(maxi,curr);
            r.push_back(curr);
        }
        return maxi;
    }
};