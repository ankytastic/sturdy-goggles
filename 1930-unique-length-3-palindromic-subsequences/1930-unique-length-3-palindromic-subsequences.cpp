class Solution {
public:
    int countPalindromicSubsequence(string s) {
        set<char> uniC;
        // store all unique characters present in the string
        for (auto i : s) {
            uniC.insert(i);
        }
        // checking the set
        // for(auto i:uniC){
        //     cout<<i<<endl;
        // }
        // find the first and last occurence of unique characters present in the string
        map<char, pair<int, int>> ran;
        for (auto j : uniC) {
            int cnt = 0;
            pair<int, int> r;
            for (int i = 0; i < s.size(); i++) {
                if (j == s[i]) {
                    if (cnt == 0){
                        r.first = i;
                        r.second=-1;
                    }
                    else
                        r.second = i;
                    cnt++;
                }
            }
            // if there is only one occurence of the unique character or the first and last occurences don't have a gap of atleast 1 index then eliminate the character from the set else store the character along with its first and last occurence in the map 
            if(r.second==-1 || r.second-r.first<2) uniC.erase(j);
            else ran[j]=r;
        }
        int cnt=0;
        for(auto i:ran){
            // cout<<i.first<<" "<< i.second.first <<" "<<i.second.second<<endl;
            // store all the unique characters present in each range and then add the set size in final count variable and return the same
            set<char> res;
            for(int j=i.second.first+1;j<i.second.second;j++){
                res.insert(s[j]);
            }
            cnt+=res.size();
        }
        return cnt;
    }
};