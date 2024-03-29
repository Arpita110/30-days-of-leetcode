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
         vector<int> nums;
        ListNode* temp=head;
        while(temp!=NULL){
            nums.push_back(temp->val);
            temp=temp->next;
        }
        stack<int> s;
        vector<int> v;
        int n= nums.size();
        for(int i=n-1; i>=0; i--)
     { 
        while(!s.empty() && s.top() <= nums[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            v.push_back(0);
        }
        else
        {
            v.push_back(s.top());
        }
        s.push(nums[i]);
    }  
        reverse(v.begin(),v.end());
   return v; 
    }
};