class Solution {
public:
    vector <vector<int>> threeSum(vector<int> &nums) {
        vector <vector<int>> ans;
        unordered_map<int, int> hashMap;
        int len = nums.size();

        // sort(begin(nums), end(nums));
        sort(nums.begin(), nums.end());

        for (int num : nums) {
            hashMap[num]++;
        }

        for (int i = 0; i < len - 2; i++) {
            int l = i + 1;
            int r = len - 1;
            if (nums[i] > 0) {
                break;
            }
            if (i && nums[i] == nums[i - 1]) {
                continue;
            }
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    ans.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                    while (l < r && nums[r] == nums[r + 1]) {
                        r--;
                    }
                } else if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                }
            }
        }
        return ans;
    }
};

// Runtime: 95 ms, faster than 91.16% of C++ online submissions for 3Sum.
// Memory Usage: 20.4 MB, less than 51.50% of C++ online submissions for 3Sum.

