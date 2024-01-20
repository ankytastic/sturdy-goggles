class Solution {
public:
    int sumByD(vector<int> &arr, int div) {
        int sum = 0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            sum += (arr[i] + div - 1) / div;
        }
        return sum;
    }

    int smallestDivisor(vector<int> &arr, int limit) {
        int n = arr.size();
        if (n > limit) return -1;

        // Find the maximum element in arr
        int maxElement = arr[0];
        for (int i = 1; i < n; i++) {
            maxElement = max(maxElement, arr[i]);
        }

        int low = 1, high = maxElement;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (sumByD(arr, mid) <= limit) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};
