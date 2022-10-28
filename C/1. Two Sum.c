#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    *returnSize = 2;
    int *result = (int *) malloc(sizeof(int) * 2);
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                break;
            }
        }
    }
    return result;
}

int main() {
    int nums[5] = {1, 9, 2, 8, 2};
    int returnSize = 2;

    int *ret = twoSum(nums, 5, 17, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ret[i]);
    }
}

/**
 * Runtime: 98 ms, faster than 88.61% of C online submissions for Two Sum.
 * Memory Usage: 6.2 MB, less than 89.24% of C online submissions for Two Sum.
 */
