class Solution {
public:
    bool canAliceWin(int n) {
        int cou=0;
        int s=10;
        while(n>=s){
            n-=s;
            s-=1;
            cou++;
        }
        return cou%2?true:false;
    }
};