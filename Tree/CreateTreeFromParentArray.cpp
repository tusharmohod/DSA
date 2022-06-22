Node *createTreeFromParentArray(int parent[], int N) {
    if(N == 0) {
        return NULL;
    }
    unordered_map<int, Node*> mp;
    Node *root = NULL;
    for(int i = 0; i < N; i++) {
        mp[i] = new Node(i);
        if(parent[i] == -1) {
            root = mp[i];
        }
    }
    for(int i = 0; i < N; i++) {
        if(parent[i] != -1) {
            if(mp[parent[i]]->left == NULL) {
                mp[parent[i]]->left = mp[i];
            }
            else if(mp[parent[i]]->right == NULL) {
                mp[parent[i]]->right = mp[i];
            }
        }
    }
    return root;
}