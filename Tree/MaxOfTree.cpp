int maxOfTree(Node *root) {
	if(!root) return INT_MIN;
	return max(root->data, max(maxOfTree(root->left), maxOfTree(root->right)));
}