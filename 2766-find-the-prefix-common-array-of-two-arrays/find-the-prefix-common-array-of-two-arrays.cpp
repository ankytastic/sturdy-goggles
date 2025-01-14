class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        set<int> s;
        vector<int> res;
        for(int i=0;i<A.size();i++){
            s.insert(A[i]);
            s.insert(B[i]);
            res.push_back(2*(i+1)-s.size());
        }
        return res;
    }
};