void printKDistanceNode(Node* root, int k) {
	if(!root) return;
	if(k == 0) {
		cout << root->data << " ";
		return;
	}
	printKDistanceNode(root->left, k-1);
	printKDistanceNode(root->right, k-1);
}