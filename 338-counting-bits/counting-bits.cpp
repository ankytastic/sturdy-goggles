class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bin(n+1,0);
        int off=1;
        for(int i=1;i<=n;i++){
            if(off*2==i){
                off=i;
            }
            bin[i]=1+bin[i-off];
        }
        return bin;
    }
};