class Solution {
public:
    vector <vector<int>> floodFill(vector <vector<int>> &image, int sr, int sc, int color) {
        if (image[sr][sc] == color) {
            return image;
        }

        int m = image.size();
        int n = image[0].size();
        int oldColor = image[sr][sc];
        vector <vector<int>> ans = image;
        vector <vector<int>> directs{{0,  1},
                                     {0,  -1},
                                     {1,  0},
                                     {-1, 0}};
        queue <pair<int, int>> q{{{sr, sc}}};

        while (!q.empty()) {
            int len = q.size();
            for (int i = 0; i < len; i++) {
                auto t = q.front();
                q.pop();
                ans[t.first][t.second] = color;
                for (auto direct : directs) {
                    int row = t.first + direct[0];
                    int column = t.second + direct[1];
                    if (row < 0 || column < 0 || row >= m || column >= n || ans[row][column] != oldColor) {
                        continue;
                    }
                    q.push({row, column});
                }
            }
        }
        return ans;
    }
};

// Runtime: 26 ms, faster than 15.68% of C++ online submissions for Flood Fill.
// Memory Usage: 14.7 MB, less than 5.51% of C++ online submissions for Flood Fill.

