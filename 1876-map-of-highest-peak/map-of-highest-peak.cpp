class Solution {
public:
    
    vector<vector<int>> directions{{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    vector<vector<int>> highestPeak(vector<vector<int>>& isWater) {
        vector<vector<int>> waterCell;
        vector<vector<int>> res(isWater.size(), vector<int>(isWater[0].size(), -1));
        queue<vector<int>> que;
        for(int i = 0; i < isWater.size(); i++) {
            for(int j = 0; j < isWater[0].size(); j++) {
                if(isWater[i][j] == 1) { 
                    res[i][j] = 0; 
                    que.push({i, j});
                }
            }
        }
        while(!que.empty()) {
            int N = que.size();

            while(N--) {
                vector<int> curr = que.front();
                que.pop();

                int i = curr[0];
                int j = curr[1];

                for(auto &dir : directions) {
                    int i_ = i + dir[0];
                    int j_ = j + dir[1];

                    if(i_ >= 0 && i_ < isWater.size() && j_ >= 0 && j_ < isWater[0].size() && res[i_][j_] == -1) {
                        res[i_][j_] = res[i][j] + 1;
                        que.push({i_, j_});
                    }
                }
            }
        }

        return res;
    }
};