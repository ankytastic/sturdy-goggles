class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        set<int> s;
        for (int i = 0; i < rooms[0].size(); i++) {
            s.insert(rooms[0][i]);
        }
        for (int i = 1; i < rooms.size(); i++) {
            if (s.find(i)!= s.end()) {
                for (int j = 0; j < rooms[i].size(); j++) {
                    s.insert(rooms[i][j]);
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};