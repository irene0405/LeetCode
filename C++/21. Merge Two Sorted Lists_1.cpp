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
        ListNode *l1 = list1;
        ListNode *l2 = list2;

        if (!l1 || !l2) {
            return l1 ? l1 : l2;
        }
        if (l1->val < l2->val) {
            l1->next = mergeTwoLists(l1->next, l2);
            return l1;
        } else {
            l2->next = mergeTwoLists(l1, l2->next);
            return l2;
        }
    }
};

// Runtime: 7 ms, faster than 91.56% of C++ online submissions for Merge Two Sorted Lists.
// Memory Usage: 14.8 MB, less than 42.56% of C++ online submissions for Merge Two Sorted Lists.

