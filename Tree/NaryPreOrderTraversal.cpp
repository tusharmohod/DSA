void preorder(vector<int> &res, Node *root) {
    if(!root) {
        return;
    }
    res.push_back(root->val);
    for(int i = 0; i < root->children.size(); i++) {
        preorder(res, root->children[i]);
    }
}

vector<int> naryPreOrderTraversal(Node* root) {
    vector<int> res;
    preorder(res, root);
    return res;
}