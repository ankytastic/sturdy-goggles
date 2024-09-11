class Solution {
public:
    int countTestedDevices(vector<int>& b) {
        int r=0;
        for(int i=0;i<b.size();i++){
            if(r>0) b[i]=max(0,b[i]-r);
            if(b[i]>0) r++;
        }
        return r;
    }
};