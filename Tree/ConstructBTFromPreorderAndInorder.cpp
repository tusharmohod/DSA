int preIndex = 0;
Node* constructBTFromPreorderAndInorder(int pre[], int in[], int si, int ei) {
	if(si > ei) {
		return NULL;
	}
	Node *root = new Node(pre[preIndex++]);
	int inIndex = 0;
	for(int i = si; i <= ei; i++) {
		if(root->data == in[i]) {
			inIndex = i;
			break;
		}
	}
	root->left = constructBTFromPreorderAndInorder(pre, in, si, inIndex - 1);
	root->right = constructBTFromPreorderAndInorder(pre, in, inIndex + 1, ei);
	return root;
}