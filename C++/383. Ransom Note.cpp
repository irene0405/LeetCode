class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        if (magazine.length() < ransomNote.length()) {
            return false;
        }
        int freqM[26] = {0};
        int freqS[26] = {0};

        for (int i = 0; i < magazine.length(); i++) {
            int temp = magazine[i] - 'a';
            freqM[temp]++;
        }
        for (int i = 0; i < ransomNote.length(); i++) {
            int temp = ransomNote[i] - 'a';
            freqS[temp]++;
        }
        for (int i = 0; i < 26; i++) {
            if (freqM[i] < freqS[i]) {
                return false;
            }
        }
        return true;
    }
};

// Runtime: 16 ms, faster than 89.37% of C++ online submissions for Ransom Note.
// Memory Usage: 8.7 MB, less than 71.89% of C++ online submissions for Ransom Note.

