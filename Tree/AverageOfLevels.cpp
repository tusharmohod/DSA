vector<double> averageOfLevels(TreeNode* root) {
    vector<double> res;
    queue<TreeNode*> q;
    q.push(root);
    while(!q.empty()) {
        double sum = 0.0;
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
            sum += (double)t->val;
        }
        res.push_back(sum / (size * 1.0));
    }
    return res;
}