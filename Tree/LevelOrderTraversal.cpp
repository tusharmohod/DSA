vector<vector<int>> levelOrderTraversal(TreeNode* root) {
    vector<vector<int>> res;
    if(root == NULL) return res;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        vector<int> curr;
        int size = q.size();
        for(int i = 0; i < size; i++) {
            TreeNode *t = q.front();
            q.pop();
            if(t->left) {
                q.push(t->left);
            }
            if(t->right) {
                q.push(t->right);
            }
            curr.push_back(t->val);
        }
        res.push_back(curr);
    }
    return res;
}