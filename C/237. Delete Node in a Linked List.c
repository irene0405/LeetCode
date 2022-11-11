/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void deleteNode(struct ListNode *node) {
    node->val = node->next->val;
    node->next = node->next->next;
}

// Runtime: 3 ms, faster than 97.71% of C online submissions for Delete Node in a Linked List.
// Memory Usage: 6.4 MB, less than 42.94% of C online submissions for Delete Node in a Linked List.
