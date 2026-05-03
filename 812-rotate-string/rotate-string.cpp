class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()) return false;
        string d=s+s;
        for(int i=0;i<s.size();i++){
            if(d[i]==goal[0]){
                bool match = true;
                for(int j=1;j<goal.size();j++){
                    if(d[i+j]!=goal[j]){
                        match = false;
                        break;
                    }
                }
                if (match) return true;
            }
        }
        return false;
    }
};