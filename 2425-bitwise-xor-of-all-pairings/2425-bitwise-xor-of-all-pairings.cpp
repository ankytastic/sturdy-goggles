class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int res=0;
        int xor1=0;
        int xor2=0;
        for(int i=0;i<nums1.size();i++){
            xor1^=nums1[i];
        }
        for(int i=0;i<nums2.size();i++){
            xor2^=nums2[i];
        }
        if(nums1.size()%2==0 && nums2.size()%2==0) return 0;
        return xor1^xor2; 
    }
};