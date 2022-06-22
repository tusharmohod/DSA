const int EMPTY = -1;
void serializeBinaryTree(Node *root, vector<int> &arr) {
	if(!root) {
		arr.push_back(EMPTY);
		return;
	}
	arr.push_back(root->data);
	serializeBinaryTree(root->left);
	serializeBinaryTree(root->right);
}