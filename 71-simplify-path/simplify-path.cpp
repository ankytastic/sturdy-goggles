class Solution {
public:
    string simplifyPath(string path) {
        vector<string> dir;
        for(int i=0;i<path.size();){
            if(path[i]=='/'){
                while(i<path.size() && path[i]=='/'){
                    i++;
                }
            }
            else{
                string s="";
                while(i<path.size() && path[i]!='/'){
                    s+=path[i];
                    i++;
                }
                if(!s.empty())dir.push_back(s);
            }
        }
        stack<string> st;
        string result="";
        for(string s:dir){
            if(s=="."){
                continue;
            }
            else if(s==".."){
                if(!st.empty()){
                    st.pop();
                }
            }
            else{
                st.push(s);
            }
        }
        while(!st.empty()){
            result="/"+st.top()+result;
            st.pop();
        }
        if(result=="") return "/";
        return result;
    }
};