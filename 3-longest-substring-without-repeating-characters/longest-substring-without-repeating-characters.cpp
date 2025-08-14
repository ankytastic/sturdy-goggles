class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // Approach 1
        if(s.size()<=1) return s.size();
        unordered_set<char> t;
        int start=0;
        int end=1;
        int maxL=1;
        t.insert(s[0]);
        while (end < s.size()) {
            if (t.find(s[end]) == t.end()) {
                t.insert(s[end]);
                maxL = max(maxL, end - start + 1);
                end++;
            } else {
                t.erase(s[start]);
                start++;
            }
        }
        return maxL;
    }
};



























// Approach 2
        // vector<int> mpp(256,-1);
        // int l=0,r=0;
        // int n=s.size();
        // int len=0;
        // while(r<n){
        //     if(mpp[s[r]]!=-1) l=max(mpp[s[r]]+1,l);
        //     mpp[s[r]]=r;
        //     len=max(len,r-l+1);
        //     r++;
        // }
        // return len;