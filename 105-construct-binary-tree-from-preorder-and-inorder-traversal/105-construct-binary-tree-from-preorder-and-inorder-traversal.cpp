/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
     int index=0;
    map<int,int> m;
   TreeNode* solve(vector<int>& po,int start,int end)
   {
     if(start>end) 
         return NULL;
     int element=po[index];
     TreeNode* root=new TreeNode(element);
     index++;
     int posn=m[element];
    root->left= solve(po,start,posn-1); 
     root->right=solve(po,posn+1,end); 
     
     return root;
   }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
       
      int n=inorder.size();
     
      for(int i=0;i<n;i++)
      {
        m[inorder[i]]=i;
      }
     return solve(preorder,0,preorder.size()-1);  
    }
};