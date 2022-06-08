void inorderIterative(Node* root) {
	if(!root) {
		return;
	}
	stack<Node*> s;
	Node* curr = root;
	while(curr || !s.empty()) {
		while(curr) {
			s.push(curr);
			curr = curr->left;
		}
		curr = s.top();
		cout << curr->data << " ";
		curr = curr->right;
	}
}