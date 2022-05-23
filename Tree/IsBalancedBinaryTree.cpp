bool ans = true;
int myFunc(TreeNode* root) {
    if(root == NULL) {
        return 0;
    }
    int hls = myFunc(root->left);
    int hrs = myFunc(root->right);
    if(abs(hls - hrs) > 1) {ans = false;}
    return 1 + max(hls, hrs);
}

bool isBalancedBinaryTree(TreeNode* root) {
    if(root == NULL) { 
        return true; 
    }
    int ht = myFunc(root);
    return ans;
}