int minDepthBinaryTree(TreeNode* root) {
    if(root == NULL) return 0;
    int lst = minDepthBinaryTree(root->left);
    int rst = minDepthBinaryTree(root->right);
    return (lst == 0 || rst == 0)  ? 1 + max(lst, rst) : 1 + min(lst, rst);
}