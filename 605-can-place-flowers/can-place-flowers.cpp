class Solution {
public:
    bool canPlaceFlowers(vector<int>& f, int n) {
        int size = f.size();
        for(int i = 0; i < size; i++){
            if(f[i] == 0 &&
               (i == 0 || f[i - 1] == 0) && 
               (i == size - 1 || f[i + 1] == 0)){
                f[i] = 1;
                n--;
            }
        }
        return n <= 0;
    }
};
