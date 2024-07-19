class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> mini;
        vector<int> min3;
        vector<int> res;
        vector<vector<int>> min2(matrix[0].size(),vector<int> (matrix.size()));
        for(auto mat:matrix){
            mini.push_back(*min_element(mat.begin(), mat.end()));
        }
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                min2[j][i]=matrix[i][j];
            }
        }
        for(auto mat:min2){
            min3.push_back(*max_element(mat.begin(), mat.end()));
        }
        for(int i=0;i<mini.size();i++){
            for(int j=0;j<min3.size();j++){
                if(mini[i]==min3[j]){
                    res.push_back(mini[i]);
                    return res;
                } 
            }
        }
        return res;
    }
};