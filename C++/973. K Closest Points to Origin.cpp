class Solution {
public:
    vector <vector<int>> kClosest(vector <vector<int>> &points, int k) {
        sort(points.begin(), points.end(), [](vector<int> &a, vector<int> &b) {
            return a[0] * a[0] + a[1] * a[1] < b[0] * b[0] + b[1] * b[1];
        });
        return vector < vector < int >> (points.begin(), points.begin() + k);
    }
};

// Runtime: 415 ms, faster than 71.11% of C++ online submissions for K Closest Points to Origin.
// Memory Usage: 57 MB, less than 94.26% of C++ online submissions for K Closest Points to Origin.

