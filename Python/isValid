class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        d = {"(": 0, ")": "(", "[": 0, "]": "[", "{": 0, "}": "{"}
        temp = []
        for i in range(len(s)):
            if len(temp) == 0:
                temp.append(s[i])
            else:
                if d[s[i]] == temp[-1]:
                    temp.pop()
                else:
                    temp.append(s[i])
        return temp == []


print(Solution.isValid(Solution, "{}"))  # True
print(Solution.isValid(Solution, "{(})"))  # False

'''
Runtime: 48 ms, faster than 10.48% of Python online submissions for Valid Parentheses.
Memory Usage: 13.7 MB, less than 30.00% of Python online submissions for Valid
'''
