#include <stdio.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    *returnSize = 2;
    int i = 0, j = 0;
    int *result = (int *) malloc(sizeof(int) * 2);
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (target == nums[i] + nums[j]) {
                result[0] = i;
                result[1] = j;
                return result;
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
 * Runtime: 131 ms, faster than 77.46% of C online submissions for Two Sum.
 * Memory Usage: 6.5 MB, less than 28.10% of C online submissions for Two Sum.
 */
