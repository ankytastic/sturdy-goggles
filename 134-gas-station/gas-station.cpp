class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int burn=0;
        int earn=0;
        int res=0;
        int tot=0;
        for(int g=0;g<gas.size();g++){
            burn+=cost[g];
            earn+=gas[g];
            tot+=gas[g]-cost[g];
            if(tot<0){
                tot=0;
                res=g+1;
            }
        }
        if(burn>earn) return -1;
        return res;
    }
};