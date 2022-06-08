void preorderIterative(Node *root) {
    if(!root) {
        return;
    }
    stack<Node *> s;
    Node *curr = root;
    while(curr || !s.empty()) {
        while(curr) {
            cout << curr->data << " ";
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        curr = curr->right;
    }
}