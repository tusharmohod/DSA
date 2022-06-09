void leftViewOfBinaryTreeRec(Node *root, int &maxLevel, int level) {
	if(!root) return;
	if(maxLevel < level) {
		cout << root->data << " ";
		maxLevel = level;
	}
	leftViewOfBinaryTreeRec(root->left, maxLevel, level + 1);
	leftViewOfBinaryTreeRec(root->right, maxLevel, level + 1);
}

void leftViewOfBinaryTreeRec(Node *root) {
	leftViewOfBinaryTreeRec(root, 0, 1);
}