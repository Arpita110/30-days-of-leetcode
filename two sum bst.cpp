/**
TWO SUM 
Input: root = [5,3,6,2,4,null,7], k = 9
Output: true*/

void inorder(TreeNode* root,vector<int>& ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    bool findTarget(TreeNode* root, int k) {
        vector<int> ans;
        inorder(root,ans);
        int l=0,r=ans.size()-1;
        
        while(l<r){
            if(ans[l]+ans[r]==k) return true;
            if(ans[l]+ans[r]>k) r--;
            else l++;
        }
        return false;
        
    }
