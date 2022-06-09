int postIndex = n - 1;
Node* constructBTFromPostorderAndInorder(int in[], int post[], int si, int ei) {
    if(si > ei) {
        return NULL;
    }
    Node *root = new Node(post[postIndex--]);
    int inIndex = 0;
    for(int i = si; i <= ei; i++) {
        if(root->data == in[i]) {
            inIndex = i;
            break;
        } 
    }
    root->right = constructBTFromPostorderAndInorder(in, post, inIndex + 1, ei);
    root->left = constructBTFromPostorderAndInorder(in, post, si, inIndex - 1);
    return root;
}