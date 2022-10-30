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
        unordered_set < ListNode * > visited;

        while (head != nullptr) {
            if (visited.count(head)) {
                return true;
            } else {
                visited.insert(head);
                head = head->next;
            }
        }
        return false;
    }
};

// Runtime: 51 ms, faster than 5.85% of C++ online submissions for Linked List Cycle.
// Memory Usage: 10.7 MB, less than 11.69% of C++ online submissions for Linked List Cycle.

