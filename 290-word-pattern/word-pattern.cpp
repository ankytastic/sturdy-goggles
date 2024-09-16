class Solution {
public:
    bool wordPattern(string pat, string str) {
        vector<string> wds;
        string wd;        
        for (char c : str) {
            if (c == ' ') {
                if (!wd.empty()) {
                    wds.push_back(wd);
                    wd="";
                }
            } else {
                wd += c;
            }
        }
        if (!wd.empty()) {
            wds.push_back(wd);
        }
        if (wds.size() != pat.size()) {
            return false;
        }
        unordered_map<char, string> p2w;
        unordered_map<string, char> w2p;
        for (int i = 0; i < pat.size(); ++i) {
            char p = pat[i];
            string w = wds[i];

            if (p2w.find(p) != p2w.end()) {
                if (p2w[p] != w) {
                    return false;
                }
            } else {
                p2w[p] = w;
            }
            if (w2p.find(w) != w2p.end()) {
                if (w2p[w] != p) {
                    return false;
                }
            } else {
                w2p[w] = p;
            }
        }
        return true;
    }
};