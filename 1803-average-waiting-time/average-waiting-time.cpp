class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double curT=0;
        double waitT=0;
        for(int i=0;i<customers.size();i++){
            if(i==0){
                curT+=customers[i][0]+customers[i][1];
                waitT+=customers[i][1];
            }else{
                if(curT>customers[i][0]){
                    waitT+=curT-customers[i][0];
                }else if(curT<customers[i][0]){
                    curT=customers[i][0];
                }
                curT+=customers[i][1];
                waitT+=customers[i][1];
            }
        }
        return waitT/customers.size();
    }
};