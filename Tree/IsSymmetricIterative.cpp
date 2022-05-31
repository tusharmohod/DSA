bool isSymmetricIterative(TreeNode* root) {
    queue<TreeNode*> q;
    if(!root) return true;
    q.push(root);
    TreeNode *temp = q.front();
    q.pop();
    q.push(temp->left);
    q.push(temp->right);
    while(!q.empty()) {
        TreeNode *t1 = q.front();
        q.pop();
        TreeNode *t2 = q.front();
        q.pop();
        if(!t1 && !t2) continue;
        if(!t1 || !t2) return false;
        if(t1->val != t2->val) return false;
        q.push(t1->left);
        q.push(t2->right);
        q.push(t1->right);
        q.push(t2->left);
    }
    return true;
}