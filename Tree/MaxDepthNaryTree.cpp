int maxDepthNaryTree(Node* root) {
    if(root == NULL) return 0;
    int mx = 0;
    for(int i = 0; i < root->children.size(); i++) {
        int ht = maxDepthNaryTree(root->children[i]);
        mx = max(mx, ht);
    }
    return 1 + mx;
}