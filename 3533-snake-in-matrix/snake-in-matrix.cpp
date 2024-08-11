class Solution {
public:
    int finalPositionOfSnake(int n, vector<string>& c) {
        vector<vector<int>> mat(n,vector<int> (n,0));
        int curri=0;
        int currj=0;
        for(int i=0;i<c.size();i++){
            if(c[i]=="LEFT"){
                curri--;
            }
            else if(c[i]=="RIGHT"){
                curri++;
            }
            else if(c[i]=="UP"){
                currj--;
            }
            else if(c[i]=="DOWN"){
                currj++;
            }
        }
        return (currj*n)+curri;
    }
};