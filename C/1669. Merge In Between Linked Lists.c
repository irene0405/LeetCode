/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode *mergeInBetween(struct ListNode *list1, int a, int b, struct ListNode *list2) {
    struct ListNode *left = list1;

    for (int i = 0; i < a - 1; ++i) {
        left = left->next;
    }
    struct ListNode *right = left->next;
    for (int i = a; i <= b; ++i) {
        right = right->next;
    }
    struct ListNode *insert = list2;
    while (insert->next) insert = insert->next;

    left->next = list2;
    insert->next = right;
    return list1;
}

//Runtime: 306 ms, faster than 16.82% of C online submissions for Merge In Between Linked Lists.
//Memory Usage: 32.9 MB, less than 75.70% of C online submissions for Merge In Between Linked Lists.
