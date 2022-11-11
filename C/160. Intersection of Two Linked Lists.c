/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *getIntersectionNode(struct ListNode *headA, struct ListNode *headB) {
    if (headA == NULL || headB == NULL) {
        return false;
    }

    struct ListNode *a = headA;
    struct ListNode *b = headB;

    while (a != b) {
        a = a == NULL ? headB : a->next;
        b = b == NULL ? headA : b->next;
    }

    return a;
}

//Runtime: 48 ms, faster than 81.89% of C online submissions for Intersection of Two Linked Lists.
//Memory Usage: 14.1 MB, less than 40.46% of C online submissions for Intersection of Two Linked Lists.
