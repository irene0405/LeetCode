/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *swapPairs(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *dummy = (struct ListNode *) malloc(sizeof(struct ListNode));
    dummy->next = head;
    struct ListNode *temp = dummy;

    while (temp->next != NULL && temp->next->next != NULL) {
        struct ListNode *node1 = temp->next;
        struct ListNode *node2 = temp->next->next;
        node1->next = node2->next;
        node2->next = node1;
        temp->next = node2;
        temp = temp->next->next;
    }
    return dummy->next;
}

// Runtime: 0 ms, faster than 100.00% of C online submissions for Swap Nodes in Pairs.
// Memory Usage: 5.8 MB, less than 56.66% of C online submissions for Swap Nodes in Pairs.
