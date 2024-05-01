class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx=0;
        while(word[idx]!=ch){
            idx++;
            if(idx>word.size()) return word;
        }
        reverse(word.begin(),word.begin()+idx+1);
        return word;
    }
};