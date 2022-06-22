int maxWidthOfTree(Node* root) {
    int res = 0;
    if(!root) {
        return res;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty()) {
        int count = q.size();
        res = max(res, count);
        for(int i = 0; i < count; i++) {
            Node *t = q.front();
            q.pop();
            if(t->left) {
                q.push(t->left);
            }
            if(t->right) {
                q.push(t->right);
            }
        }
    }
    return res;
}