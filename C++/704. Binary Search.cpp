class Solution {
public:
    int search(vector<int> &nums, int target) {
        int i = 0;
        for (int c : nums) {
            if (c == target) {
                return i;
            }
            i++;
        }
        return -1;
    }
};

// Runtime: 70 ms, faster than 65.58% of C++ online submissions for Binary Search.
// Memory Usage: 27.5 MB, less than 63.80% of C++ online submissions for Binary Search.

