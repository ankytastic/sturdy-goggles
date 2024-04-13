// class Solution {
// public:
//     vector<int> topKFrequent(vector<int>& nums, int k) {
//         unordered_map<int,int> mp;
//         for(int i=0;i<nums.size();i++){
//             mp[nums[i]]++;
//         }
//         priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
//         for(int i=0;i<mp.size();i++){
//             minh.push({mp[i],i});
//             if(minh.size()>k){
//                 minh.pop();
//             }
//         }
//         vector<int> result;
//         while(minh.size()>0){
//             result.push_back(minh.top().second);
//             minh.pop();
//         }
//         return result;
//     }
// };
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int num : nums) {
            mp[num]++;
        }
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> minh;
        for (auto it = mp.begin(); it != mp.end(); ++it) {
            minh.push({it->second, it->first});
            if (minh.size() > k) {
                minh.pop();
            }
        }
        
        vector<int> result;
        while (!minh.empty()) {
            result.push_back(minh.top().second);
            minh.pop();
        }
        reverse(result.begin(), result.end()); // Reverse the result to get the top k frequent elements
        return result;
        
    }
};