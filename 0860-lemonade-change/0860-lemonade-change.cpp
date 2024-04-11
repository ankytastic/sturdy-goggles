class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int cou5=0;
        int cou10=0;
        for(int i=0;i<bills.size();i++){
            int c=bills[i]-5;
            if(c==5){
                if(cou5>0){
                    cou5--;
                }
                else{
                    return false;
                }
            }
            if(c==15){
                if(cou5>2){
                    cou5-=3;
                }
                else if(cou5>0 && cou10>0){
                    cou5--;
                    cou10--;
                }
                else{
                    return false;
                }
            }
            if(bills[i]==5) cou5++;
            if(bills[i]==10) cou10++;
        }
        return true;
    }
};