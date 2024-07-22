class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string> mpp;
        for(int i=0;i<names.size();i++){
            mpp[heights[i]]=names[i];
        }
        int i=0;
        for(auto m:mpp){
            names[i]=m.second;
            i++;
        }
        reverse(names.begin(),names.end());
        return names;
    }
};