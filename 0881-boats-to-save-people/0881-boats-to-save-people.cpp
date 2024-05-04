class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
        int cou=1;
        int sum=people[0];
        for(int i=1;i<people.size();i++){
            sum+=people[i];
            if(sum>limit){
                cou+=1;
                sum=people[i];
            }
        }
        return cou;
    }
};