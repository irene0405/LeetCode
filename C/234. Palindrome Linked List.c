/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode *head) {
    if (head->next == NULL) {
        return true;
    }

    struct ListNode *fast = head;
    struct ListNode *slow = head;
    struct ListNode *mid = head;
    while (fast != NULL && fast->next != NULL) {
        mid = slow;
        fast = fast->next->next;
        slow = slow->next;
    }

    struct ListNode *prev;
    fast = slow->next;
    while (fast != NULL) {
        prev = fast->next;
        fast->next = slow;
        slow = fast;
        fast = prev;
    }

    fast = head;
    while (fast != mid->next) {
        if (fast->val != slow->val) {
            return false;
        }
        fast = fast->next;
        slow = slow->next;
    }
    return true;
}

// Runtime: 191 ms, faster than 78.46% of C online submissions for Palindrome Linked List.
// Memory Usage: 41.3 MB, less than 78.05% of C online submissions for Palindrome Linked List.
