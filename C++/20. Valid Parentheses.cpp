class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for (char i: s) {
            if (st.empty() || i == '(' || i == '[' || i == '{') {
                st.push(i);
            } else if (i == ')' && st.top() == '(' || i == ']' && st.top() == '[' || i == '}' && st.top() == '{') {
                st.pop();
            } else {
                return false;
            }
        }
        return st.empty();
    }
};

// Runtime: 0 ms, faster than 100.00% of C++ online submissions for Valid Parentheses.
// Memory Usage: 6.4 MB, less than 10.19% of C++ online submissions for Valid Parentheses.

