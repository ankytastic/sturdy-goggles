class Solution {
public:
    int generateKey(int num1, int num2, int num3) {
        vector<string> s;
        s.push_back(to_string(num1));
        s.push_back(to_string(num2));
        s.push_back(to_string(num3));
        for (int i = 0; i < 3; i++) {
            while (s[i].size() < 4) {
                s[i] = '0' + s[i];
            }
        }
        string res="";
        for (int i = 0; i < 4; i++){
            res+=min(s[0][i],min(s[1][i],s[2][i]));
        }
        return stoi(res);
    }
};