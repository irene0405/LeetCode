class Solution {
public:
    vector <vector<int>> threeSum(vector<int> &nums) {
        vector <vector<int>> ans;
        sort(begin(nums), end(nums));
        unordered_map<int, int> um;

        int len = nums.size();

        for (int num : nums) {
            um[num]++;
        }

        if (um[0] >= len - 1) {
            ans.push_back({0, 0, 0});
            return ans;
        }

        for (int i = 0; i < len - 2; i++) {
            if (i && nums[i] == nums[i - 1]) continue;
            for (int j = i + 1; j < len - 1; j++) {
                if (j - 1 != i && nums[j] == nums[j - 1]) continue;
                int key = 0 - nums[i] - nums[j];
                if (!um.count(key)) continue;
                if (key < nums[j]) break;
                if (um[key] >= (1 + (nums[i] == key) + (nums[j] == key))) {
                    ans.push_back({nums[i], nums[j], key});
                }
            }
        }
        return ans;
    }
};

// Runtime: 233 ms, faster than 34.67% of C++ online submissions for 3Sum.
// Memory Usage: 20.6 MB, less than 47.97% of C++ online submissions for 3Sum.

