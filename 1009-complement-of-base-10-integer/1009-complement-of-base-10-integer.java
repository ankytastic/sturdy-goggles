class Solution {
    public int bitwiseComplement(int n) {
        int k=n;
        int x=0;
        if(n==0){
            return 1;
        }
        while(k>>1!=0){
            x=x<<1;
            x=x|1;
            k=k>>1;
        }
        int ans=(~n)&x;
        return ans;
    }
}