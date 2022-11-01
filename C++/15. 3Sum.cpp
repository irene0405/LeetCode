class Solution {
public:
    vector <vector<int>> threeSum(vector<int> &nums) {
        sort(begin(nums), end(nums));
        int n = nums.size();
        unordered_map<int, int> c;
        for (int x : nums) {
            c[x]++;
        }
        vector <vector<int>> ans;
        for (int i = 0; i < n - 1; i++) {
            if (i && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < n; j++) {
                if (j - 1 != i && nums[j] == nums[j - 1]) {
                    continue;
                }
                int t = 0 - nums[i] - nums[j];
                if (t < nums[j]) {
                    continue;
                }
                if (!c.count(t)) {
                    continue;
                }
                if (c[t] >= 1 + (nums[i] == t) + (nums[j] == t))
                    ans.push_back({nums[i], nums[j], t});
            }
        }
        return ans;
    }
};

// Runtime: 156 ms, faster than 60.78% of C++ online submissions for 3Sum.
// Memory Usage: 20.5 MB, less than 50.49% of C++ online submissions for 3Sum.

