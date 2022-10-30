/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head) {
            return false;
        }
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast) {
            if (!fast->next) {
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
};

// Runtime: 7 ms, faster than 98.71% of C++ online submissions for Linked List Cycle.
// Memory Usage: 8.1 MB, less than 18.24% of C++ online submissions for Linked List Cycle.

