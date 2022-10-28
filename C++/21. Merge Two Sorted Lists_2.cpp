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
        struct ListNode *l1 = list1;
        struct ListNode *l2 = list2;

        ListNode copy(0);
        ListNode *tail = &copy;

        while (l1 && l2) {
            if (l1->val < l2->val) {
                tail->next = l1;
                l1 = l1->next;
            } else {
                tail->next = l2;
                l2 = l2->next;
            }
            tail = tail->next;
        }

        if (l1) {
            tail->next = l1;
        } else if (l2) {
            tail->next = l2;
        }
        return copy.next;
    }
};

// Runtime: 4 ms, faster than 96.93% of C++ online submissions for Merge Two Sorted Lists.
// Memory Usage: 14.8 MB, less than 42.56% of C++ online submissions for Merge Two Sorted Lists.

