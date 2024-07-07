class Solution {
public:
    int numWaterBottles(int num, int e) {
        int res=num;
        while(num>=e){
            res+=num/e;
            num=num/e+num%e;
        }
        return res;
    }
};