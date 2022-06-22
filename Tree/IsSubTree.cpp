bool isSubTree(Node* T, Node* S) {
    if(T == NULL && S == NULL) {
        return true;
    }
    if(T == NULL || S == NULL) {
        return false;
    }
    if(T->data == S->data) {
        if(isSubTree(T->left, S->left)) {
            if(isSubTree(T->right, S->right)) {
                return true;
            }
        }
    }
    return (isSubTree(T->left, S) || isSubTree(T->right, S));
}