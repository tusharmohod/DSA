void inorder(Node *root, int &val) {
    if(!root) {
        return;
    }
    inorder(root->left, val);
    val = (val < root->data) ? root->data : INT_MAX;
    inorder(root->right, val);
}

bool isBST(Node* root) {
    int val = INT_MIN;
    inorder(root, val);
    return (val != INT_MAX);
}