class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) {
            return false;
        }

        int sfreq[26] = {0};
        int tfreq[26] = {0};

        for (int i = 0; i < s.length(); i++) {
            int stemp = s[i] - 'a';
            sfreq[stemp]++;

            int ttemp = t[i] - 'a';
            tfreq[ttemp]++;
        }

        for (int i = 0; i < 26; i++) {
            if (sfreq[i] != tfreq[i]) {
                return false;
            }
        }
        return true;
    }
};

// Runtime: 10 ms, faster than 85.81% of C++ online submissions for Valid Anagram.
// Memory Usage: 7.4 MB, less than 56.39% of C++ online submissions for Valid Anagram.

