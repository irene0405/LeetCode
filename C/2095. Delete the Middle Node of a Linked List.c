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
class Solution{
        public:
        ListNode * deleteMiddle(ListNode * head) {
            if (head->next == NULL) {
                return NULL;
            }

            struct ListNode *slow = head;
            struct ListNode *fast = head;
            struct ListNode *target;

            while (fast != NULL && fast->next != NULL) {
                target = slow;
                fast = fast->next->next;
                slow = slow->next;
            }

            struct ListNode *temp = head;
            while (temp->next != NULL) {
                if (temp != target) {
                    temp = temp->next;
                } else {
                    temp->next = temp->next->next;
                    break;
                }
            }
            return head;
        }
};

// Runtime: 1841 ms, faster than 58.62% of C++ online submissions for Delete the Middle Node of a Linked List.
// Memory Usage: 294.9 MB, less than 22.82% of C++ online submissions for Delete the Middle Node of a Linked List.
