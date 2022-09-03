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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         ListNode* ans=new ListNode(0);
        priority_queue<int, vector<int>, greater<int>> q;
        for(int i=0;i<lists.size();i++){
            while(lists[i]!=NULL){
                q.push(lists[i]->val);
                lists[i]=lists[i]->next;
            }
        }
        int v;
        ListNode* head=ans;
        while(!q.empty()){
            v=q.top();
            ans->next = new ListNode(v); 
            ans = ans -> next;
            q.pop();
           
        }
        
        return head->next;
    }
};