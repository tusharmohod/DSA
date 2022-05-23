int maxDepthBinaryTree(TreeNode* root) {
    if(root == NULL) return 0;
    int lst = maxDepthBinaryTree(root->left);
    int rst = maxDepthBinaryTree(root->right);
    return 1 + max(lst, rst);
}