bool myFunc(TreeNode *root, int sum, int target) {
    if(!root) {
        return false;
    }
    if(!root->left && !root->right) {
        return (sum + root->val == target); 
    }
    bool r1 = myFunc(root->left, sum + root->val, target);
    if(r1) {
        return true;
    }
    bool r2 = myFunc(root->right, sum + root->val, target);
    return (r2 == true);
}

bool hasPathSum(TreeNode* root, int targetSum) {
    int sum = 0;
    return myFunc(root, sum, targetSum);        
}