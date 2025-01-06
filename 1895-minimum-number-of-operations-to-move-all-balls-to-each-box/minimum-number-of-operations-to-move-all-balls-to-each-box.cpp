class Solution {
public:
    vector<int> minOperations(string boxes) {
        int n = boxes.size();
        vector<int> answer(n, 0);
        
        // Left to right pass
        int ballsLeft = 0, movesLeft = 0;
        for (int i = 0; i < n; ++i) {
            answer[i] += movesLeft;  // Add the number of moves required for balls on the left
            if (boxes[i] == '1') {
                ballsLeft++;  // Increment the number of balls
            }
            movesLeft += ballsLeft;  // Increment the total moves as we move right
        }
        
        // Right to left pass
        int ballsRight = 0, movesRight = 0;
        for (int i = n - 1; i >= 0; --i) {
            answer[i] += movesRight;  // Add the number of moves required for balls on the right
            if (boxes[i] == '1') {
                ballsRight++;  // Increment the number of balls
            }
            movesRight += ballsRight;  // Increment the total moves as we move left
        }
        
        return answer;
    }
};
