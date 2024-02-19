class Solution {
public:
    int solve(int num) {
        int count = 0;
        while (num > 0) {
            if (num & 1) {
                count++;
            }
            num >>= 1;
        }
        return count;
    }
    vector<string> readBinaryWatch(int turnedOn) {
        vector<string> r;
        if(turnedOn>8) return r;
        for(int i=0;i<12;i++){
            for(int j=0;j<60;j++){
                if(solve(i)+solve(j)==turnedOn){
                    r.push_back(to_string(i) + ":" + (j < 10 ? "0" : "") + to_string(j));
                }
            }
        }
        return r;
    }
};