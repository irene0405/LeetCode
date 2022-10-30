class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> hashmap;

        for (char c : t) {
            hashmap[c] += 1;
        }
        for (char c : s) {
            hashmap[c] -= 1;
        }

        for (auto[c, num]: hashmap) {
            if (num != 0)
                return false;
        }
        return true;
    }
};

// Runtime: 26 ms, faster than 35.74% of C++ online submissions for Valid Anagram.
// Memory Usage: 7.3 MB, less than 56.39% of C++ online submissions for Valid Anagram.

