// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int early = 0;
        int late = n;

        while (early < late) {
            int middle = (late - early) / 2 + early;
            if (isBadVersion(middle)) {
                late = middle;
            } else {
                early = middle + 1;
            }
        }
        return early;
//        return late;
    }
};

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for First Bad Version.
// Memory Usage: 5.8 MB, less than 67.74% of C++ online submissions for First Bad Version.

