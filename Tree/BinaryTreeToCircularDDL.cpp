Node *prev = NULL;

Node *helper(Node *root) {
    if(root == NULL) {
        return NULL;
    }
    Node *head = helper(root->left);
    if(prev == NULL) {
        head = root;
    }
    else {
        prev->right = root;
        root->left = prev;
    }
    prev = root;
    helper(root->right);
    return head;
}

Node *binaryTreeToCircularDDL(Node *root) {
    if(root == NULL) {
        return NULL;
    }
    root = helper(root);
    prev->right = root;
    root->left = prev;
    return root;
}