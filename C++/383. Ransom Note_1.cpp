class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> count(26, 0);
        for (const char c : magazine) {
            int temp = c - 'a';
            count[temp]++;
        }
        for (const char c : ransomNote) {
            int temp = c - 'a';
            if (--count[temp] < 0) {
                return false;
            }
        }
        return true;
    }
};

// Runtime: 20 ms, faster than 82.73% of C++ online submissions for Ransom Note.
// Memory Usage: 8.8 MB, less than 39.74% of C++ online submissions for Ransom Note.

