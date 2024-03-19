class Solution {
public:
private:
    void flood(int i, int j, vector<vector<int>>& image, int oldColor,
               int newColor, int n, int m) {
        if (i < 0 || j < 0 || i == n || j == m || image[i][j] != oldColor)
            return;
        image[i][j] = newColor;
        flood(i + 1, j, image, oldColor, newColor, n, m);
        flood(i - 1, j, image, oldColor, newColor, n, m);
        flood(i, j + 1, image, oldColor, newColor, n, m);
        flood(i, j - 1, image, oldColor, newColor, n, m);
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int color) {
        int oldColor = image[sr][sc];
        if (oldColor == color)
            return image;
        int n = image.size(), m = image[0].size();
        flood(sr, sc, image, oldColor, color, n, m);
        return image;
    }
};