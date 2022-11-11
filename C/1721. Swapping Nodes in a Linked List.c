/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *swapNodes(struct ListNode *head, int k) {
    int len = 0;
    struct ListNode *cur = head;
    while (cur) {
        cur = cur->next;
        len++;
    }

    cur = head;
    struct ListNode *node1 = NULL;
    struct ListNode *node2 = NULL;
    for (int i = 1; i <= len; ++i, cur = cur->next) {
        if (i == k) {
            node1 = cur;
        }
        if (i == len - k + 1) {
            node2 = cur;
        }
    }
    int temp = node1->val;
    node1->val = node2->val;
    node2->val = temp;

    return head;
}

// Runtime: 536 ms, faster than 49.33% of C online submissions for Swapping Nodes in a Linked List.
// Memory Usage: 48.4 MB, less than 48.88% of C online submissions for Swapping Nodes in a Linked List.
