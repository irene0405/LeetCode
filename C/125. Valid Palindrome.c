

bool isPalindrome(char *s) {
    if (strlen(s) == 0 || strlen(s) == 1) {
        return true;
    }
    int i = 0;
    int j = strlen(s) - 1;
    while (i < j) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] - 'A' + 'a';
            }
        } else {
            i++;
            continue;
        }
        if ((s[j] >= 'A' && s[j] <= 'Z') || (s[j] >= 'a' && s[j] <= 'z') || (s[j] >= '0' && s[j] <= '9')) {
            if (s[j] >= 'A' && s[j] <= 'Z') {
                s[j] = s[j] - 'A' + 'a';
            }
        } else {
            j--;
            continue;
        }
        if (s[i] == s[j]);
        else return false;
        i++;
        j--;
    }
    return true;
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Valid Palindrome.
// Memory Usage: 6.5 MB, less than 22.99% of C online submissions for Valid Palindrome.

