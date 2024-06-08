class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        int h = skills[0], cnt = 0, mx = skills[0], previ = 0;
        for (int i = 1; i < skills.size(); i++) {
            mx = max(skills[i], mx);
            if (h == mx) {
                cnt++;
            } else {
                cnt = 1;
                previ = i;
                h = mx;
            }
            if (cnt == k)
                return previ;
        }
        return previ;
    }
};
