struct TrieNode {
    TrieNode *child[26];
    bool isEnd = false;

    TrieNode() {
        for (int i = 0; i < 26; i++) {
            child[i] = nullptr;
        }
    }
};

bool search(string &key) {
    TrieNode *curr = root;

    for (int i = 0; i < key.size(); i++) {
        if (curr->child[key[i] - 'a'] == nullptr) {
            return false;
        }
        curr = curr->child[key[i] - 'a'];
    }

    return curr->isEnd;
}