int diameter = 0;

int diameterOfTree(Node *root) {
	if(!root) return 0;
	int lst = diameterOfTree(root->left);
	int rst = diameterOfTree(root->right);
	diameter = max(diameter, root->data);
	return 1 + max(lst, rst);
}