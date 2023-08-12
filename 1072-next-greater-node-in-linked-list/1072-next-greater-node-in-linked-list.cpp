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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode* temp=head;
        ListNode* temp2=temp->next;
        vector <int> ans;
        while(temp->next!=nullptr)
        {
            while( temp2!=nullptr && temp2->val <= temp->val)
            {
                temp2=temp2->next;
            }
            if(temp2==nullptr)
                ans.push_back(0);
            else
                ans.push_back(temp2->val);
            temp=temp->next;
            temp2=temp->next;
        }
        ans.push_back(0);
        return ans;
    }
};