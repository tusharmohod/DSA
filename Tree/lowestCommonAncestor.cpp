TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if(!root) return NULL;
    int large = max(p->val, q->val);
    int small = min(p->val, q->val);
    if(root->val > large) {
        return lowestCommonAncestor(root->left, p, q);
    }
    else if(root->val < small) {
        return lowestCommonAncestor(root->right, p, q);
    }
    return root;
}