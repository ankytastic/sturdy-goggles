class Solution {
public:
    int minimumAddedInteger(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int ans=INT_MAX;
        for(int i=0;i<nums1.size();i++){
            for(int j=i+1;j<nums1.size();j++){
                vector<int> ups;
                for(int k=0;k<nums1.size();k++){
                    if(k!=i && k!=j){
                        ups.push_back(nums1[k]);
                    }
                }
                bool flag=true;
                int d=nums2[0]-ups[0];
                for(int l=1;l<ups.size();l++){
                    if(nums2[l]-ups[l]!=d){
                        flag=false;
                        break;
                    }
                }
                if(flag) ans=min(ans,d);
            }
        }
        return ans;
    }
};