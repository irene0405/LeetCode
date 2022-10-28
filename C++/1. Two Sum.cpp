#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> visited;
        for (int i = 0; i < nums.size(); i++) {
            int find = target - nums[i];
            if (visited.find(find) == visited.end()) {
                visited[nums[i]] = i;
            } else {
                return vector<int>{visited[find], i};
            }
        }
        return {};
    }
};

int main() {
    vector<int> nums = {2, 7, 11, 15};    int target = 9; // [0,1]
//    vector<int> nums = {3,2,4};    int target = 6; // [1,2]
//    vector<int> nums = {3, 3};    int target = 6; // [0,1]
    Solution s;
    vector<int> result = s.twoSum(nums, target);
    cout << "[" << result[0] << "," << result[1] << "]\n";

    return 0;
}

/*
 * Runtime: 12 ms, faster than 93.51% of C++ online submissions for Two Sum.
 * Memory Usage: 11 MB, less than 31.91% of C++ online submissions for Two Sum.
 */
