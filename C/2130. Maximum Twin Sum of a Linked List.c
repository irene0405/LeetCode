/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *reverse(struct ListNode *head) {
    struct ListNode *prev = NULL;
    struct ListNode *temp;
    while (head != NULL) {
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}

int pairSum(struct ListNode *head) {
    if (head->next->next == NULL) {
        return head->val + head->next->val;
    }

    struct ListNode *fast = head;
    struct ListNode *slow = head;

    while (fast != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    slow = reverse(slow);

    int sum = 0;
    while (slow) {
        if ((head->val + slow->val) > sum) {
            sum = head->val + slow->val;
        }
        head = head->next;
        slow = slow->next;
    }
    return sum;
}

// Runtime: 191 ms, faster than 85.53% of C online submissions for Maximum Twin Sum of a Linked List.
// Memory Usage: 47 MB, less than 84.87% of C online submissions for Maximum Twin Sum of a Linked List.
