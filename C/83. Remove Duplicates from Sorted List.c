/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *deleteDuplicates(struct ListNode *head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }

    struct ListNode *temp = head;

    while (temp != NULL && temp->next != NULL) {
        if (temp->val != temp->next->val) {
            temp = temp->next;
        } else {
            temp->next = temp->next->next;
        }
    }

    return head;
}

// Runtime: 6 ms, faster than 85.46% of C online submissions for Remove Duplicates from Sorted List.
// Memory Usage: 6.6 MB, less than 14.31% of C online submissions for Remove Duplicates from Sorted List.
