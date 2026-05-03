class Solution {
public:
    bool rotateString(string s, string goal) {
        string d=s+s;
        for(int i=0;i<s.size();i++){
            if(d[i]==goal[0]){
                for(int j=1;j<goal.size();j++){
                    if(d[i+j]!=goal[j]){
                        return false;
                    }
                }
                return true;
            }
        }
        return false;
    }
};