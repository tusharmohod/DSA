bool myFunc(TreeNode *p, TreeNode* q) {
	if(p == NULL || q == NULL) {
		return (p == q);
	}
	return (p->val == q->val) && myFunc(p->left, q->right) && myFunc(p->right, q->left); 
}

bool isSymmetricRecursive(TreeNode* root) {
	if(root == NULL) {
		return true;
	}
	return myFunc(root->left, root->right);
}