class Solution {
public:
    string getEncryptedString(string s, int k) {
        k=k%s.size();
        string t=s+s;
        return t.substr(k,s.size());
    }
};