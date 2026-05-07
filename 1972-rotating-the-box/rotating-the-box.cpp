class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
        int n = box[0].size();
        for(int i = 0; i < m; i++){
            int empty = n - 1;
            for(int j = n - 1; j >= 0; j--){
                if(box[i][j] == '*'){
                    empty = j - 1;
                }
                else if(box[i][j] == '#'){
                    swap(box[i][j], box[i][empty]);
                    empty--;
                }
            }
        }
        vector<vector<char>> res(n, vector<char>(m));
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                res[j][m - 1 - i] = box[i][j];
            }
        }

        return res;
    }
};
// bool lArge=false;
// int si;
// if(b.size()>b[0].size()){
//     lArge=true;
//     si=b.size();
// }
// else si=b[0].size();
// bool obs=false;
// int currObs=-1;
// if(obs){
//     if(b[i][j]=='#'){
//         res[]
//     }
// }