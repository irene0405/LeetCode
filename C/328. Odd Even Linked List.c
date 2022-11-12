/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *oddEvenList(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *odd = head;
    struct ListNode *even = head->next;
    struct ListNode *evenHead = even;

    while (even && even->next) {
        odd->next = odd->next->next;
        even->next = even->next->next;
        even = even->next;
        odd = odd->next;
    }

    odd->next = evenHead;
    return head;
}

// Runtime: 15 ms, faster than 20.60% of C online submissions for Odd Even Linked List.
// Memory Usage: 7.1 MB, less than 22.76% of C online submissions for Odd Even Linked List.
