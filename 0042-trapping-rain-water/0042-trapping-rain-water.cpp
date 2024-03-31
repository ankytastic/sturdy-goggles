class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 0) return 0;
        vector<int> pref(n);
        vector<int> suff(n);
        int maxH = height[0];
        for(int i=0;i<height.size();i++){
            maxH=max(height[i],maxH);
            pref[i]=maxH;
        }
        maxH=0;
        for(int i=height.size()-1;i>=0;i--){
            maxH=max(height[i],maxH);
            suff[i]=maxH;
        }
        int res=0;
        for(int i=0;i<height.size();i++){
            res+=min(pref[i],suff[i])-height[i];
        }
        return res;
    }
};