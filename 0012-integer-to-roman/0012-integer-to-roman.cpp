class Solution {
public:
    string intToRoman(int num) {
        vector<int> val{1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> sym{"M",  "CM", "D",  "CD", "C",  "XC", "L","XL", "X",  "IX", "V",  "IV", "I"};
        string res="";
        for(int v=0;v<val.size();v++){
            if(num==0) break;
            if(val[v]<=num){
                res+=sym[v];
                num-=val[v];
                v--;
            }
        }
        return res;
    }
};