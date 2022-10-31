class Solution {
public:
    vector <vector<int>> insert(vector <vector<int>> &intervals, vector<int> &newInterval) {
        vector<int> nums(100001);
        vector <vector<int>> ans;
        for (vector<int> interval : intervals) {
            fillInterval(nums, interval[0], interval[1]);
        }

        fillInterval(nums, newInterval[0], newInterval[1]);

        int left = -1;
        int right = 1;
        for (int i = 0; i < 100000; i++) {
            if (left == -1 && nums[i]) {
                left = i;
            }
            if (left != -1 && nums[i] == 0) {
                vector<int> temp;
                temp.push_back(left);
                temp.push_back(i - 1);
                ans.push_back(temp);
                left = -1;
            }
        }
        return ans;
    }

private:
    void fillInterval(vector<int> &vec, int start, int end) {
        for (int i = start; i <= end; i++) {
            vec[i] = 1;
        }
    }
};
