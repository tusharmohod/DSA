int helper (Node *root, int &count, int X) {
    if(root == NULL) {
    	return 0;
    }
	int lst = helper(root->left, count, X);
	int rst = helper(root->right, count, X);
	if(root->data + lst + rst == X) {
		count++;
	}
	return lst + rst + root->data;
}
int countSubtreesWithSumX(Node* root, int X) {
    int count = 0;
    helper(root, count, X);
    return count;
}