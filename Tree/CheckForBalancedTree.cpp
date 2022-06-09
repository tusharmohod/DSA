int checkForBalancedTree(Node *root) {
	if(!root) return 0;
	int lh = checkForBalancedTree(root->left);
	if(lf == -1) {
		return -1;
	}
	int rh = checkForBalancedTree(root->right);
	if(rh == -1) {
		return -1;
	}
	if(abs(rh - lh) > 1) {
		return -1;
	}
	return 1 + max(lh, rh);
}