/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *removeElements(struct ListNode *head, int val) {
    if (head == NULL) {
        return head;
    }

    if (head->val == val && head->next == NULL) {
        return NULL;
    }

    struct ListNode *dummy = (struct ListNode *) malloc(sizeof(struct ListNode));
    dummy->next = head;

    struct ListNode *prev = dummy;
    struct ListNode *cur = head;

    while (cur) {
        if (cur->val == val) {
            prev->next = cur->next;
        } else {
            prev = cur;
        }
        cur = cur->next;
    }
    return dummy->next;
}

// Runtime: 20 ms, faster than 65.68% of C online submissions for Remove Linked List Elements.
// Memory Usage: 8.1 MB, less than 53.52% of C online submissions for Remove Linked List Elements.
