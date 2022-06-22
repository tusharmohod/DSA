void spiralTreeTraversal(Node *root) {
    if(!root) {
        return;
    }
    deque<Node*> dq;
    dq.push_back(root);
    bool rev = false;
    while(!dq.empty()) {
        int count = dq.size();
        for(int i = 0; i < count; i++) {
            Node *t = NULL;
            if(rev) {
                t = dq.back();
                dq.pop_back();
                if(t->right) {
                    dq.push_front(t->right);
                }   
                if(t->left) {
                    dq.push_front(t->left);
                }
            }
            else {
                t= dq.front();
                dq.pop_front();
                if(t->left) {
                    dq.push_back(t->left);
                }    
                if(t->right) {
                    dq.push_back(t->right);
                }
            }
            cout << t->key << " ";
        }
        rev = !rev;
    }
}