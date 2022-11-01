class Solution {
public:
    vector <vector<int>> threeSum(vector<int> &nums) {
        vector <vector<int>> ans;
        unordered_map<int, int> hashMap;
        int len = nums.size();

        sort(begin(nums), end(nums));

        for (int num : nums) {
            hashMap[num]++;
        }

        for (int i = 0; i < len - 2; i++) {
            if (i && nums[i] == nums[i - 1]) {
                continue;
            }
            for (int j = i + 1; j < len - 1; j++) {
                if (j - 1 != i && nums[j] == nums[j - 1]) {
                    continue;
                }
                int target = 0 - nums[i] - nums[j];
                if (target < nums[j]) {
                    break;
                }
                if (!hashMap.count(target)) {
                    continue;
                }
                if (hashMap[target] >= (1 + (nums[i] == target) + (nums[j] == target))) {
                    ans.push_back({nums[i], nums[j], target});
                }
            }
        }
        return ans;
    }
};

// Runtime: 216 ms, faster than 39.22% of C++ online submissions for 3Sum.
// Memory Usage: 20.5 MB, less than 48.93% of C++ online submissions for 3Sum.

