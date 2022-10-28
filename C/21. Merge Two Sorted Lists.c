/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode *mergeTwoLists(struct ListNode *list1, struct ListNode *list2) {
    struct ListNode *l1 = list1;
    struct ListNode *l2 = list2;
    if (!l1) {
        return l2;
    }
    if (!l2) {
        return l1;
    }
    struct ListNode *p, *list;
    if (l1->val <= l2->val) {
        p = l1;
        l1 = l1->next;
    } else {
        p = l2;
        l2 = l2->next;
    }
    list = p;
    while (l1 && l2) {
        if (l1->val < l2->val) {
            p->next = l1;
            l1 = l1->next;
        } else {
            p->next = l2;
            l2 = l2->next;
        }
        p->next->next = NULL;
        p = p->next;
    }
    if (!l1) {
        p->next = l2;
    }
    if (!l2) {
        p->next = l1;
    }
    return list;
}
