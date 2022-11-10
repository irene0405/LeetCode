/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *reverseList(struct ListNode *head) {
    if (head == NULL) {
        return head;
    }
    struct ListNode *prev = NULL;
    struct ListNode *cur = head;

    while (cur) {
        head = head->next;
        cur->next = prev;
        prev = cur;
        cur = head;
    }

    return prev;
}

// Runtime: 11 ms, faster than 12.72% of C online submissions for Reverse Linked List.
// Memory Usage: 6.3 MB, less than 60.12% of C online submissions for Reverse Linked List.
