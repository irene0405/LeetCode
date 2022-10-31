class Solution {
public:
    vector <vector<int>> updateMatrix(vector <vector<int>> &mat) {
        int m = mat.size();
        int n = mat[0].size();
        queue <pair<int, int>> q;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 0) {
                    q.push({i, j});
                } else {
                    mat[i][j] = INT_MAX;
                }
            }
        }

        vector <vector<int>> dirs = {{0,  1},
                                     {0,  -1},
                                     {-1, 0},
                                     {1,  0}};
        while (!q.empty()) {
            auto front = q.front();
            q.pop();
            for (auto dir : dirs) {
                int x = front.first + dir[0];
                int y = front.second + dir[1];
                if (x < 0 || y < 0 || x >= m || y >= n || mat[x][y] <= mat[front.first][front.second] + 1) {
                    continue;
                }
                mat[x][y] = mat[front.first][front.second] + 1;
                q.push({x, y});
            }
        }
        return mat;
    }
};

// Runtime: 309 ms, faster than 9.43% of C++ online submissions for 01 Matrix.
// Memory Usage: 70.1 MB, less than 5.02% of C++ online submissions for 01 Matrix.

