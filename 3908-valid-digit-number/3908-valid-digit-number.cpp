class Solution {
public:
    bool validDigit(int n, int x) {
        bool f=false;
        while(n>9){
            int s=n%10;
            if(s==x){
                f=true;
            }
            n=n/10;
        }
        if(n==x) f=false;
        return f;
    }
};