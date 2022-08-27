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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
            return head;
        ListNode* curr=head;
        int count=1;
        while(curr->next!=NULL&&count<k)
        {
            count++;
            curr=curr->next;
        }
        if(count<k)
            return head;
         ListNode*temp=curr->next;
        curr->next=NULL;
         ListNode*prev=NULL;
         ListNode*next=head;
        curr=head;
        while(curr!=NULL)
        {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        ListNode* list= reverseKGroup(temp,k);
        head->next=list;
        return prev;
        
        
    }
};