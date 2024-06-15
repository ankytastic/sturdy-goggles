class Solution {
public:
    bool canConstruct(string ran, string mag) {
        map<char,int> mpp;
        for(int i=0;i<mag.size();i++){
            mpp[mag[i]]++;
        }
        for(int i=0;i<ran.size();i++){
            if(mpp.find(ran[i])==mpp.end()) return false;
            else{
                if(mpp[ran[i]]>0) mpp[ran[i]]--;
                else return false;
            }
        }
        return true;
    }
};