class Solution {
public:
    int minAnagramLength(string s) {
        int len=s.size();
        string temp="";
        for(int i=0;i<len;i++){
            temp.push_back(s[i]);
            if(len%(i+1)==0){
                int tem=i+1;
                string r=temp;
                bool flag=true;
                sort(r.begin(),r.end());
                for(int j=i+1;j<len;j+=tem){
                    string p=s.substr(j,tem);
                    sort(p.begin(),p.end());
                    if(p!=r){
                        flag=false;
                        break;
                    }
                }
                if(flag) return i+1;
            }
        }
        return len;
    }
};