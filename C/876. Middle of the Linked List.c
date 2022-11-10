/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *middleNode(struct ListNode *head) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

// Runtime: 4 ms, faster than 33.12% of C online submissions for Middle of the Linked List.
// Memory Usage: 5.8 MB, less than 52.92% of C online submissions for Middle of the Linked List.
