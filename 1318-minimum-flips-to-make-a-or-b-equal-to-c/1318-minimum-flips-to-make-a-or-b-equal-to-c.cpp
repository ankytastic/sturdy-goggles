class Solution {
public:
    int minFlips(int a, int b, int c) {
        if ((a | b) == c)
            return 0;
        int flip = 0;
        while (c != 0 || a != 0 || b != 0) {
            if ((c & 1) == 1) {
                if ((a & 1) == 0 && (b & 1) == 0) {
                    flip++;
                }
            } else {
                if((a & 1) == 1 && (b & 1) == 1){
                    flip++;
                    flip++;
                }
                else if (((a & 1) == 1 || (b & 1) == 1)) {
                    flip++;
                }
            }
            c = c >> 1;
            a = a >> 1;
            b = b >> 1;
        }
        return flip;
    }
};