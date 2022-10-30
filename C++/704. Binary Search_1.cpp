class Solution {
public:
    int search(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size();

        while (left < right) {
            int middle = (right - left) / 2 + left;
            if (nums[middle] == target) {
                return middle;
            } else if (nums[middle] > target) {
                right = middle;
            } else {
                left = middle + 1;
            }
        }
        return -1;
    }
};

// Runtime: 39 ms, faster than 94.17% of C++ online submissions for Binary Search.
// Memory Usage: 27.6 MB, less than 12.32% of C++ online submissions for Binary Search.

