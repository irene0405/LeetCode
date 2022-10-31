class Solution {
public:
    vector <vector<int>> kClosest(vector <vector<int>> &points, int k) {
        vector <vector<int>> ans;
        priority_queue <pair<int, int>> pq;

        for (int i = 0; i < points.size(); i++) {
            int temp = points[i][0] * points[i][0] + points[i][1] * points[i][1];
            pq.push({temp, i});
            if (pq.size() > k) {
                pq.pop();
            }
        }

        while (!pq.empty()) {
            auto temp = pq.top();
            pq.pop();
            ans.push_back(points[temp.second]);
        }
        return ans;
    }
};

// Runtime: 461 ms, faster than 59.77% of C++ online submissions for K Closest Points to Origin.
// Memory Usage: 62.4 MB, less than 78.21% of C++ online submissions for K Closest Points to Origin.

