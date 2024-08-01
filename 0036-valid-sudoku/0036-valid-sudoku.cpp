class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        set<string> s;
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(b[i][j]=='.') continue;
                string r=string(1,b[i][j])+".R."+to_string(i);
                string c=string(1,b[i][j])+".C."+to_string(j);
                string d=string(1,b[i][j])+".D."+to_string(i/3)+"."+to_string(j/3);
                if(s.find(d)!=s.end() || s.find(r)!=s.end() || s.find(c)!=s.end()){
                    return false;
                }
                s.insert(d);
                s.insert(r);
                s.insert(c);
            }
        }
        return true;
    }
};