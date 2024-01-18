class Solution {
public:
    int minEatingSpeed(std::vector<int>& piles, int h) {
        int left = 1;
        int right = *std::max_element(piles.begin(), piles.end());

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canEatAll(piles, h, mid)) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }

        return left;
    }

private:
    bool canEatAll(const std::vector<int>& piles, int h, int k) {
        long long hours = 0; 
        for (int bananas : piles) {
            hours += (bananas + k - 1) / k;
        }
        return hours <= h;
    }
};
