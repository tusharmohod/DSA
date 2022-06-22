TreeNode* create(TreeNode *root, vector<int> &res, int i) {
    if(i >= res.size()) {
        return NULL;
    }
    root = new TreeNode(res[i]);
    root->left = create(root, res, (i << 1) + 1);
    root->right = create(root, res, (i << 1) + 2);
    return root;
}

void convertTreeFromLL(Node *head, TreeNode *&root) {
    if(head == NULL) {
        return;
    }
    vector<int> res;
    Node *curr = head;
    while(curr) {
        res.push_back(curr->data);
        curr = curr->next;
    }
    root = create(root, res, 0);
}