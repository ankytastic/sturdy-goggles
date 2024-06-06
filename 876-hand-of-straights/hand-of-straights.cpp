class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        if(hand.size()%g!=0) return false;
        sort(hand.begin(),hand.end());
        map<int,int> mpp;
        for(auto h:hand){
            mpp[h]++;
        }
        for(int n:hand){
            while(mpp[n]>0){
                for(int i=0;i<g;i++){
                    int curr=mpp[n+i];
                    if(curr==0) return false;
                    mpp[n+i]--;
                }
            }
        }
        return true;
    }
};