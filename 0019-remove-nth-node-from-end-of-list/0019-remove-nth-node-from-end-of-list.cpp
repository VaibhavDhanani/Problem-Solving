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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dum = new ListNode();
        dum->next = head;
        
        ListNode* ptr1 = dum;
        ListNode* ptr2 = dum;
        
        for (int i = 0; i <= n; i++) {
            ptr2 = ptr2->next;
        }
        while (ptr2 != nullptr) {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        ptr1->next = ptr1->next->next;
        head = dum->next;
        return head;
    }
};
