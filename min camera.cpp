/*
Input: root = [0,0,null,0,null,0,null,null,0]
Output: 2
Explanation: At least two cameras are needed to monitor all nodes of the tree. The above image shows one of the valid configurations of camera placement.

*/


int helper(TreeNode* root, int &noOfCam){
        if(root== NULL)
            return 1;
        
        int left = helper(root->left, noOfCam);
        int right = helper(root->right, noOfCam);
        
        if(left==-1 || right==-1){
            noOfCam++;
            return 0;   
        }
        
        if(left==0 || right==0)
            return 1;
        
        return -1;
        
    }
    int minCameraCover(TreeNode* root) {
        int noOfCam = 0;
        int ans = helper(root, noOfCam);
        
        if(ans == -1)  
            noOfCam++;
        
        return noOfCam;
    }
