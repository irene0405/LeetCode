class Solution {
public:
    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;
        while (i < j) {
            while (i < j && !isalnum(s[i])) {
                i++;
            }
            while (i < j && !isalnum(s[j])) {
                j--;
            }
            if (tolower(s[i++]) != tolower(s[j--])) {
                return false;
            }
        }
        return true;
    }
};

// Runtime: 6 ms, faster than 85.47% of C++ online submissions for Valid Palindrome.
// Memory Usage: 7.4 MB, less than 78.59% of C++ online submissions for Valid Palindrome.

