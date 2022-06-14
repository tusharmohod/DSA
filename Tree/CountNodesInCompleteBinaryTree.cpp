/** 
 * Time : O(log n * log n)
 * Auxiliary Space: O(n)
*/

int countNodesInCompleteBinaryTree(Node *root) {
	if(!root) {
		return 0;
	}
	int lh = 0;
	int rh = 0;
	Node *curr = root;
	while(curr) {
		lh++;
		curr = curr->left;
	}
	curr = root;
	while(curr) {
		rh++;
		curr = curr->right;
	}
	if(lh == rh) {
		return (1 << lh) - 1;
	}
	return 1 + countNodesInCompleteBinaryTree(root->left) 
			 + countNodesInCompleteBinaryTree(root->right);	
}