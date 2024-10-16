class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string res = "";
        bool flag = false;
        vector<int>vec{a,b,c};

        while(!flag)
        {
            flag=true;
            for(int i=0,j = vec[0] >= vec[1] && vec[0] >= vec[2] ? 0 : (vec[1] >= vec[0] && vec[1] >= vec[2] ? 1 : 2);i<3;i++)
            if(vec[(i+j)%3] && ((res.size()<2) || (('a'+(i+j)%3)!=res[res.size()-1]) || (('a'+(i+j)%3)!=res[res.size()-2])))
            {
                vec[(i+j)%3]--;
                res += ('a'+(i+j)%3);
                flag = false;
                break;    
            }
        }
        return res;
    }
};