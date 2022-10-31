class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<int, int> um;
        for (int i = 0; i < 127; i++) {
            um[i] = -1;
        }
        int len = 0;
        int ans = 0;
        for (int i = 0; i < s.length(); i++) {
            int temp = s[i];
            if (um[temp] == -1) {
                um[temp] = i;
                len++;
                if (ans < len) {
                    ans = len;
                }
            } else {
                len = i - um[temp];
                for (int j = 0; j < 127; j++) {
                    if (um[j] < um[temp]) {
                        um[j] = -1;
                    }
                }
                um[temp] = i;
            }
        }
        return ans;
    }
};

//Runtime: 488 ms, faster than 9.83% of C++ online submissions for Longest Substring Without Repeating Characters.
//Memory Usage: 15.1 MB, less than 11.91% of C++ online submissions for Longest Substring Without Repeating Characters.

