void helper(unordered_set<int> &s, Node* root, int ht) {
    if(root == NULL) {
        return;
    }
    helper(s, root->left, ht-1);
    s.insert(ht);
    helper(s, root->right, ht+1);
}

int verticalWidth(Node* root) {
    unordered_set<int> s;
    helper(s, root, 0);
    return s.size();
}