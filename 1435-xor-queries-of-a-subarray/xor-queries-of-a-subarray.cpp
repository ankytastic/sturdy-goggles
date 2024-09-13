class Solution {
public:
    int xorq(vector<int>& arr,int s,int e){
        int r=0;
        for(int i=s;i<=e;i++){
            r^=arr[i];
        }
        return r;
    }
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& q) {
        vector<int> res;
        for(auto s:q){
            int k=xorq(arr,s[0],s[1]);
            res.push_back(k);
        }
        return res;
    }
};