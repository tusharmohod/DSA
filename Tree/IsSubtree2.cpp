bool helper(TreeNode* root, TreeNode *subRoot) {
    if(root == NULL && subRoot == NULL) { 
        return true;
    }
    if(root == NULL || subRoot == NULL) {
        return false;
    }
    return root->val == subRoot->val
        && helper(root->left, subRoot->left)
        && helper(root->right, subRoot->right);
}

bool isSubtree2(TreeNode* root, TreeNode* subRoot) {
    if(root == NULL) {
        return false;
    }
    if(subRoot == NULL) {
        return false;
    }
    return helper(root, subRoot) 
        || isSubtree(root->left, subRoot)
        || isSubtree(root->right, subRoot);
}