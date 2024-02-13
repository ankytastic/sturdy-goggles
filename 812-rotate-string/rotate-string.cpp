class Solution {
public:
    void leftrotate(string& s) {
        reverse(s.begin(), s.begin() + 1);
        reverse(s.begin() + 1, s.end());
        reverse(s.begin(), s.end());
    }
    bool rotateString(string s, string goal) {
        if (s.size() != goal.size())
            return false;
        for(int i=0;i<s.size();i++){
            // int flag=0;
            // for(int j=0;j<s.size();j++){
            //     if(s[j]!=goal[j]) 
            //         break;
            //     flag=1;
            // }
            // if(flag==1){
            //     return true;
            // }
            if(s==goal) return true;
            leftrotate(s);
        }
        // char r=goal[0];
        // char c=s[0];
        // int ind=-1;
        // int i=0;
        // while(r!=c && goal[1]!=s[i+1]){
        //     i++;
        //     if(i>s.size()) return false;
        //     c=s[i];
        // }
        // for(int j=i;j<goal.size()+i;j++){
        //     int k=j%goal.size();
        //     if(s[j%goal.size()]!=goal[j-i]){
        //         return false;
        //     }

        // }
        return false;
    }
};