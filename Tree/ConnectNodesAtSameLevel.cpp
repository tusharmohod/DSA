void connectNodesAtSameLevel(Node *root) {
    if(root == NULL) {
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(!q.empty()) {
        int count = q.size();
        Node *prev = NULL;
        for(int i = 0; i < count; i++) {
            Node *t = q.front();
            q.pop();
            if(t->left) {
               q.push(t->left);
            }
            if(t->right) {
               q.push(t->right);
            }
            if(i == 0) {
                prev = t;
            }
            else if(i == count - 1 || i > 0) {
                prev->nextRight = t;
            }
            prev = t;
        }
        prev->nextRight = NULL;
    }
}