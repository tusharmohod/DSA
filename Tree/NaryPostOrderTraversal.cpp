void postorder(vector<int> &res, Node *root) {
    if(!root) {
        return;
    }
    for(int i = 0; i < root->children.size(); i++) {
        postorder(res, root->children[i]);
    }
    res.push_back(root->val);
}

vector<int> naryPostOrderTraversal(Node* root) {
    vector<int> res;
    postorder(res, root);
    return res;
}