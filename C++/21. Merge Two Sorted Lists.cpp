/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        struct ListNode *p, *list;
        ListNode *l1 = list1;
        ListNode *l2 = list2;

        if (l1 == NULL) return l2;
        if (l2 == NULL) return l1;

        if (l1->val < l2->val) {
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
            p = p->next;
        }
        if (l1 == NULL) {
            p->next = l2;
        }
        if (l2 == NULL) {
            p->next = l1;
        }
        return list;
    }
};

// Runtime: 12 ms, faster than 67.26% of C++ online submissions for Merge Two Sorted Lists.
// Memory Usage: 14.8 MB, less than 81.64% of C++ online submissions for Merge Two Sorted Lists.

