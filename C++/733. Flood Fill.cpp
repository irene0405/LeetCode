class Solution {
public:
    vector <vector<int>> floodFill(vector <vector<int>> &image, int sr, int sc, int color) {
        if (image[sr][sc] == color) {
            return image;
        }
        helper(image, sr, sc, image[sr][sc], color);
        return image;
    }

    void helper(vector <vector<int>> &image, int sr, int sc, int color, int newColor) {
        int m = image.size();
        int n = image[0].size();
        if (sr < 0 || sc < 0 || m <= sr || n <= sc || image[sr][sc] != color) {
            return;
        }
        image[sr][sc] = newColor;
        helper(image, sr + 1, sc, color, newColor);
        helper(image, sr - 1, sc, color, newColor);
        helper(image, sr, sc + 1, color, newColor);
        helper(image, sr, sc - 1, color, newColor);
    }
};

// Runtime: 16 ms, faster than 64.13% of C++ online submissions for Flood Fill.
// Memory Usage: 14 MB, less than 48.10% of C++ online submissions for Flood Fill.

