bool isIdentical(Node *r1, Node *r2) {
    if(r1 == NULL && r2 == NULL) {
        return true;
    }
    if(r1 == NULL || r2 == NULL) {
        return false;
    }
    if(r1->data != r2->data) {
        return false;
    }
    bool f1 = isIdentical(r1->left, r2->left);
    if(f1 == false) {
        return false;
    }
    return isIdentical(r1->right, r2->right);
}