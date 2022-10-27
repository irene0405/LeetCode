#include <stdio.h>
#include <stdbool.h>

bool isValid(char *s) {
    char stack[5000] = {0};
    int flag = -1;

    while (*s) {
        if (*s == ')') {
            if (flag >= 0 && stack[flag] == '(') {
                flag--;
            } else {
                return 0;
            }
        } else if (*s == ']') {
            if (flag >= 0 && stack[flag] == '[') {
                flag--;
            } else {
                return 0;
            }
        } else if (*s == '}') {
            if (flag >= 0 && stack[flag] == '{') {
                flag--;
            } else {
                return 0;
            }
        } else {
            flag++;
            stack[flag] = *s;
        }
        s++;
    }
    return flag == -1;
}


int main() {
    if (isValid("({))")) {
        printf("true");
    } else {
        printf("false");
    }
}

/**
 * Runtime: 0 ms, faster than 100.00% of C online submissions for Valid Parentheses.
 * Memory Usage: 5.6 MB, less than 58.48% of C online submissions for Valid Parentheses.
 */
