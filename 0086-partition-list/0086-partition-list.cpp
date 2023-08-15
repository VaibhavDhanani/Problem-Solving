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
    ListNode* partition(ListNode* head, int x) {
        ListNode* ptr1=new ListNode(0);
        ListNode* dum1=ptr1;
        ListNode* ptr2=new ListNode(0);
        ListNode* dum2=ptr2;
        ListNode* temp=head;
        while(temp!=nullptr)
        {
            if(temp->val < x)
            {
                ptr1->next=temp;
                ptr1=ptr1->next;
            }
            else
            {
                ptr2->next=temp;
                ptr2=ptr2->next;
            }
            temp=temp->next;
        }
        ptr2->next=nullptr;
        ptr1->next=dum2->next;
        return dum1->next;
    }
};