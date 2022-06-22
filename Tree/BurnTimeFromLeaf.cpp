int res = 0;

int burnTimeFromLeaf(Node *root, int &leaf, int &dist) {
	if(!root) {
		return 0;
	}
	if(root->data == leaf) {
		dist = 0;
		return 1;
	}

	int ldist = -1;
	int rdist = -1;

	int lh = burnTimeFromLeaf(root->left, leaf, ldist);
	int rh = burnTimeFromLeaf(root->right, leaf, rdist);

	if(ldist != -1) {
		dist = ldist + 1;
		res = max(res, dist + rh);
	}
	else if(rdist != -1) {
		dist = rdist + 1;
		res = max(res, dist + lh);
	}

	return 1 + max(lh, rh);
}