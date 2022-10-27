class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        for i in range(len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]


print(Solution.twoSum(Solution, [2, 7, 11, 15], 9)) # [0, 1]

'''
Runtime: 8025 ms, faster than 5.07% of Python online submissions for Two Sum.
Memory Usage: 14.3 MB, less than 67.65% of Python online submissions for Two Sum.
'''
