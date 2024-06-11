class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int> mpp;
        vector<int> res;
        for (int i = 0; i < arr1.size(); i++) {
            mpp[arr1[i]]++;
        }
        for (int i = 0; i < arr2.size(); i++) {
            while (mpp[arr2[i]] > 0) {
                res.push_back(arr2[i]);
                mpp[arr2[i]]--;
            }
        }
        
        for (auto it = mpp.begin(); it != mpp.end(); it++) {
            if (it->second > 0) {
                for (int j = 0; j < it->second; j++) {
                    res.push_back(it->first);
                }
            }
        }
        return res;
    }
};