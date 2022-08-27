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
      ListNode* first=head;
        ListNode* sec=head;
        
        for(int i=0;i<n;i++)
        {
            first=first->next;
        }
        if(first==NULL)
            return head->next;
        while(first->next!=NULL)
        {
            sec=sec->next;
            first=first->next;
        }
        sec->next=sec->next->next;
        return head;
        
       
    }
};