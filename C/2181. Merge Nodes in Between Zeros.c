/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *mergeNodes(struct ListNode *head) {
    struct ListNode *cur = head;
    while (cur) {
        if (cur->next->val != 0) {
            cur->val += cur->next->val;
            cur->next = cur->next->next;
        } else {
            cur->next = cur->next->next;
            cur = cur->next;
        }
    }

    return head;
}

// Runtime: 776 ms, faster than 58.34% of C online submissions for Merge Nodes in Between Zeros.
// Memory Usage: 83.9 MB, less than 90.28% of C online submissions for Merge Nodes in Between Zeros.
