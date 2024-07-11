class Solution {
public:
    string reverseParentheses(string s) {
        vector<int> a;
        string res="";
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                a.push_back(res.size());
            }
            else if(s[i]==')'){
                reverse(res.begin()+a[a.size()-1],res.end());
                a.pop_back();
            }
            else{
                res+=s[i];
            }
        }
        return res;
    }
};