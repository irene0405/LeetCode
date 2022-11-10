/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int getDecimalValue(struct ListNode *head) {
    struct ListNode *temp = head;
    if (temp->next == NULL) {
        return temp->val;
    }

    int len = 0;
    while (temp) {
        len++;
        temp = temp->next;
    }

    int ans = 0;

    for (int i = len - 1; i >= 0; i--) {
        ans += head->val * pow(2, i);
        head = head->next;
    }

    return ans;
}

// Runtime: 7 ms, faster than 13.67% of C online submissions for Convert Binary Number in a Linked List to Integer.
// Memory Usage: 5.9 MB, less than 15.44% of C online submissions for Convert Binary Number in a Linked List to Integer.
