TreeNode* searchBST(TreeNode* root, int val) {
    if(!root) {
        return NULL;
    }
    if(root->val == val) {
        return root;
    }
    TreeNode *t1 = searchBST(root->left, val);
    if(!t1) {
        t1 = searchBST(root->right, val);
    }
    return t1;
    
}