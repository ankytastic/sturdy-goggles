class Solution {
public:
    int hammingWeight(int n) {
        int c=0;
        int k;
        while(n>2){
            k=n%2;
            c+=k;
            n=n/2;
        }
        if(n==2) k=1;
        return c+k;
    }
};