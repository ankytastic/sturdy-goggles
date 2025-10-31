class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        set<int> s;
        vector<int> r;
        for(auto i:nums){
            if(s.find(i)!=s.end()){
                r.push_back(i);
                if(r.size()==2) return r;
            }
            s.insert(i);
        }
        return r;
    }
};