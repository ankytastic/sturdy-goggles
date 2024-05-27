class Solution {
public:
    string compressedString(string word) {
        string res="";
        char prev=word[0];
        int cou=1;
        for(int i=1;i<word.size();i++){
            if(prev==word[i] && cou<9) cou++;
            else if(prev==word[i] && cou>=9){
                res+=to_string(9)+prev;
                cou=1;
            }
            else{
                res+=to_string(cou)+prev;
                prev=word[i];
                cou=1;
            }
        }
        res+=to_string(cou)+prev;
        return res;

    }
};