class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int cou=0;
        for(int i=0;i<seats.size();i++){
            cou+=abs(seats[i]-students[i]);
        }
        return cou;
    }
};