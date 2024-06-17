#define ll long long int
class Solution {
public:
    bool judgeSquareSum(int c) {
        vector<int> r;
        for(int i=0;i*i<=c;i++){
            r.push_back(i);
        }
        int i=0;
        int j=r.size()-1;
        while(i<=j){
            ll k=(r[i]*r[i])+(r[j]*r[j]);
            if(k>c)j--;
            else if(k<c)i++;
            else return true;
        }
        return false;
    }
};