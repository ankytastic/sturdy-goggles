class Solution {
public:
    bool closeStrings(string nums1, string nums2) {
        map<char,int> set1;
        map<char,int> set2;
        set<char> s1;
        set<char> s2;
        for(auto n:nums1){
            set1[n]++;
            s1.insert(n);
        }
        for(auto n:nums2){
            set2[n]++;
            s2.insert(n);
        }
        map<int,int> r1;
        for(auto n:set1){
            r1[n.second]++;
        }
        map<int,int> r2;
        for(auto n:set2){
            r2[n.second]++;
        }
        return (set1==set2 || (r1==r2 && s1==s2));
    }
};