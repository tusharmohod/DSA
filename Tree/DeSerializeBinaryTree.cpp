const int EMPTY = -1;
int index = 0;

Node *deSerializeBinaryTree(vector<int> &arr) {
	if(index == arr.size()) {
		return NULL;
	}
	int val = arr[index];
	index++;
	if(val == EMPTY) {
		return NULL;
	}
	Node *root = new Node(val);
	root->left = deSerializeBinaryTree(arr);
	root->right = deSerializeBinaryTree(arr);
	return root;
}