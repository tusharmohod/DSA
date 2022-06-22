bool helper(Node* l, Node *r) {
    if(l == NULL && r == NULL) {
        return true;
    }
    if(l == NULL || r == NULL) {
        return false;
    }
    return(helper(l->left, r->right) && helper(l->right, r->left));
}

bool isFoldable(Node* root) {
    if(root == NULL) {
        return true;
    }
    return helper(root->left, root->right);
}