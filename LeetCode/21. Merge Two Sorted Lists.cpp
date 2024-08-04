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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;
        ListNode* pointer = list1;
        if (list1 -> val > list2 -> val)
        {
            pointer = list2;
            list2 = list2 -> next;
        }
        else list1 = list1 -> next;
        ListNode *res = pointer;
        while (list1 &&  list2)
        {
            if (list1 -> val < list2 -> val)
            {
                res -> next = list1;
                list1 = list1 -> next;
            }
            else
            {
                res -> next = list2;
                list2 = list2 -> next;
            }
            res = res -> next;
                
        }
        if (!list1) res -> next = list2;
        else res -> next = list1;
        return pointer;
    }
};