class Solution {
public:
    int maxArea(vector<int>& h) {
        int mCurr=0;
        int s=0;
        int e=h.size()-1;
        while(s<e){
            mCurr=max((min(h[s],h[e])*(e-s)),mCurr);
            if(h[s]<h[e]) s++;
            else e--;
        }
        return mCurr;
    }
};