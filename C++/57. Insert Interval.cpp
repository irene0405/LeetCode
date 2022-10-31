class Solution {
public:
    vector <vector<int>> insert(vector <vector<int>> &intervals, vector<int> &newInterval) {
        int len = intervals.size();
        int cur = 0;
        vector <vector<int>> ans;

        while (cur < len && intervals[cur][1] < newInterval[0]) {
            ans.push_back(intervals[cur]);
            cur++;
        }
        while (cur < len && intervals[cur][0] <= newInterval[1]) {
            newInterval[0] = min(intervals[cur][0], newInterval[0]);
            newInterval[1] = max(intervals[cur][1], newInterval[1]);
            cur++;
        }
        ans.push_back(newInterval);
        while (cur < len) {
            ans.push_back(intervals[cur]);
            cur++;
        }
        return ans;
    }
};

// Runtime: 12 ms, faster than 97.04% of C++ online submissions for Insert Interval.
// Memory Usage: 17.1 MB, less than 37.90% of C++ online submissions for Insert Interval.

