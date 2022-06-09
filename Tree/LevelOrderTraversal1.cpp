void levelOrderTraversal1(TreeNode* root) {
    vector<vector<int>> res;
    if(root == NULL) {
        return res;
    }
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        TreeNode *t = q.front();
        q.pop();
        cout << t->data << " ";
        if(t->left) {
            q.push(t->left);
        }
        if(t->right) {
            q.push(t->right);
        }
    }
}