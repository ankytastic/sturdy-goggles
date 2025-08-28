class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0){
            return 1;
        }
        int powTwo=1;
        while(powTwo<=n){
            powTwo<<=1;
        }
        int x=powTwo-1;
        return n^x;
    }
};