class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        if (s != t) {
            return false;
        } else {
            return true;
        }

    }
};

// Runtime: 17 ms, faster than 64.62% of C++ online submissions for Valid Anagram.
// Memory Usage: 7.5 MB, less than 13.24% of C++ online submissions for Valid Anagram.

