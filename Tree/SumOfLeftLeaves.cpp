int myFunc(TreeNode *root) {
    if(!root) return 0;
    if(!root->left && !root->right) return root->val;
    int sum = 0;
    sum += myFunc(root->left);
    if(root->right && !root->right->left && !root->right->right) {
        sum += 0;
    }
    else {
        sum += myFunc(root->right);
    }
    return sum;
}

int sumOfLeftLeaves(TreeNode* root) {
    if(!root) return 0;
    if(!root->left && !root->right) return 0;
    return myFunc(root);
}