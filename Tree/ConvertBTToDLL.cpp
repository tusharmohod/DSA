Node *prev = NULL;
Node* convertBTToDLL(Node *root) {
	if(!root) {
		return NULL;
	}
	Node *head = convertBTToDLL(root->left);
	if(!prev) {
		head = root;
	}
	else {
		prev->right = root;
		root->left = prev;
	}
	prev = root;
	convertBTToDLL(root->right);
	return head;
}