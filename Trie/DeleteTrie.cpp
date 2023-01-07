struct TrieNode {
    TrieNode* child[26];
    bool isEnd = false;

    TrieNode() {
        for (int i = 0; i < 26; i++) {
            child[i] = nullptr;
        }
    }
};

bool isEmpty(TrieNode* root) {
    for (int i = 0; i < 26; i++) {
        if (root->child[i] != nullptr) {
            return false;
        }
    }
    return true;
}

TrieNode* deleteTrie(TrieNode* root, string &st, int index) {
    if (index == st.size()) {
        root->isEnd = false;
        if (isEmpty(root) == true) {
            delete root;
            root = nullptr;
        }
        return root;
    }

    int index = st[index] - 'a';
    root->child[index] = deleteTrie(root->child[index], st, index + 1);

    if (root->isEnd == false && isEmpty(root) == true) {
        delete root;
        root = nullptr;
    }
    return root;
}