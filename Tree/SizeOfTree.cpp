int sizeOfTree(Node *root) {
	if(!root) return 0;
	return 1 + sizeOfTree(root->left) + sizeOfTree(root->right);
}