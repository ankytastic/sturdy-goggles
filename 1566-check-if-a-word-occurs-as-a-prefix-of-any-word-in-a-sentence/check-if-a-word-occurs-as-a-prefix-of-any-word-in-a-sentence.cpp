class Solution {
public:
    int isPrefixOfWord(string sentence, string se) {
        vector<string> s;
        string curr="";
        for(char i:sentence){
            if(i==' '){
                s.push_back(curr);
                curr="";
            }
            else{
                curr+=i;
            }
        }
        if(!curr.empty()) s.push_back(curr);
        for(int i=0;i<s.size();i++){
            if(s[i].size()>=se.size()){
                string k=s[i].substr(0,se.size());
                if(k==se) return i+1;
            }
        }
        return -1;
    }
};