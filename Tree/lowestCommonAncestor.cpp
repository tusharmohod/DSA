Node* lowestCommonAncestor(Node *root, Node *p, Node *q) {
	if(!root) {
		return NULL;
	}
	if(root == p || root == q) {
		return root;
	}
	Node *lst = lowestCommonAncestor(root->left, p, q);
	Node *rst = lowestCommonAncestor(root->right, p, q);
	if(lst && rst) {
		return root;
	}
	return (lst) ? lst : rst;
}