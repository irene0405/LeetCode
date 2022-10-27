#include <stdio.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
    *returnSize = 2;
    int *ret = (int *) malloc(2 * sizeof(int)), i, j, temp;
    for (i = 0; i < numsSize; i++) {
        temp = target - nums[i];
        for (j = i + 1; j < numsSize; j++) {
            if (temp == nums[j]) {
                ret[0] = i;
                ret[1] = j;
                return ret;
            }
        }
    }
    return ret;
}

int main() {
    int nums[5] = {1, 9, 2, 8, 2};
    int returnSize = 2;

    int *ret = twoSum(nums, 5, 17, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", ret[i]);
    }
}
