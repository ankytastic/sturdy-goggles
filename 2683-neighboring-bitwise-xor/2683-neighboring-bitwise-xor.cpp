class Solution {
public:
    bool doesValidArrayExist(vector<int>& d) {
        int cou=1;
        for(int i=0;i<d.size();i++){
            if(d[i]==1) cou++;
        }
        return cou%2;
    }
};