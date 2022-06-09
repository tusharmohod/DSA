void leftViewOfBinaryTreeIterative(Node *root) {
	if(!root) return;
	queue<Node*> q;
	q.push(root);
	while(!q.empty()) {
		int count = q.size();
		for(int i = 0; i < count; i++) {
			Node *t = q.front();
			q.pop();
			if(i == 0) {
				cout << t->data << " ";
			}
			if(t->left) {
				q.push(t->left);
			}
			if(t->right) {
				q.push(t->right);
			}
		}
	}
}