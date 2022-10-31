class Solution {
public:
    int maxSubArray(vector<int> &nums) {
        vector<int> sum(nums.size());
        sum[0] = nums[0];
        if (nums.size() == 1) {
            return sum[0];
        }
        for (int i = 1; i < nums.size(); i++) {
            sum[i] = max(sum[i - 1] + nums[i], nums[i]);
        }
//        int ans = -99;
//        for (int i = 0; i < nums.size(); i++) {
//            if (ans < sum[i]) {
//                ans = sum[i];
//            }
//        }
//        return ans;
        return *std::max_element(sum.begin(), sum.end());
    }
};

// Runtime: 116 ms, faster than 95.12% of C++ online submissions for Maximum Subarray.
// Memory Usage: 70.5 MB, less than 6.78% of C++ online submissions for Maximum Subarray.

