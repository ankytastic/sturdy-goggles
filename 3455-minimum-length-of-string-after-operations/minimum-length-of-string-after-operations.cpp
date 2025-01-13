class Solution {
public:
    int minimumLength(string s) {
        if (s.size() < 3)
            return s.size();
        map<char, int> mpp;
        for (int i = 0; i < s.size(); i++) {
            mpp[s[i]]++;
        }
        int su = 0;
        for (auto& i : mpp) {
            if(i.second<3) su+=i.second;
            else{
                if(i.second%2) su+=1;
                else su+=2;
            }
        }
        return su;
    }
};