class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> um;

        int len = 0;
        int ans = 0;
        int start = 0;
        for (int i = 0; i < s.length(); i++) {
            int key = s[i];
            if (um.find(key) == um.end() || um[key] < start) {
                um[key] = i;
                len++;
                if (ans < len) {
                    ans = len;
                }
            } else {
                start = um[key] + 1;
                len = i - um[key];
                um[key] = i;
            }
        }
        return ans;
    }
};

// Runtime: 40 ms, faster than 45.46% of C++ online submissions for Longest Substring Without Repeating Characters.
// Memory Usage: 8.4 MB, less than 61.06% of C++ online submissions for Longest Substring Without Repeating Characters.

