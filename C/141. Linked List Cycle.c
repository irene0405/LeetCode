/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return false;
    }

    struct ListNode *slow = head;
    struct ListNode *fast = head;

    while (fast) {
        if (fast->next == NULL) {
            return false;
        }
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            return true;
        }
    }
    return false;
}

// Runtime: 28 ms, faster than 10.49% of C online submissions for Linked List Cycle.
// Memory Usage: 8.1 MB, less than 18.74% of C online submissions for Linked List Cycle.
