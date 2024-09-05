class Solution {
public:
    bool checkTwoChessboards(string coordinate1, string coordinate2) {
        int c1=coordinate1[0]-'a';
        int c2=coordinate2[0]-'a';
        int r1=coordinate1[1]-'0';
        int r2=coordinate2[1]-'0';
        return (c1==c2?(r1%2)==(r2%2):((c1%2==c2%2)?((r1%2)==(r2%2)):(!(r1%2)==(r2%2))));
    }
};