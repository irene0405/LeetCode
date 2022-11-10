/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    if (list1 == NULL) {
        return list2;
    }
    if (list2 == NULL) {
        return list1;
    }
    
    struct ListNode *ptr, *ans;
    if (list1->val < list2->val) {
        ptr = list1;
        list1 = list1->next;
    } else {
        ptr = list2;
        list2 = list2->next;
    }
    
    ans = ptr;
    
    while (list1 && list2) {
        if (list1->val < list2->val) {
            ptr->next = list1;
            list1 = list1->next;
        } else {
            ptr->next = list2;
            list2 = list2->next;
        }
        ptr = ptr->next;
    }
    
    ptr->next = list1? list1:list2;
     return ans;
}

// Runtime: 2 ms, faster than 92.81% of C online submissions for Merge Two Sorted Lists.
// Memory Usage: 6.1 MB, less than 52.41% of C online submissions for Merge Two Sorted Lists.
