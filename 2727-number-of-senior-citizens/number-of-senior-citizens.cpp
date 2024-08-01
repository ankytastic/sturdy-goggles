class Solution {
public:
    int countSeniors(vector<string>& details) {
        int cou=0;
        for(int i=0;i<details.size();i++){
            string r=details[i].substr(11,2);
            int s=stoi(r);
            cou=(s>60?cou+1:cou);
        }
        return cou;
    }
};