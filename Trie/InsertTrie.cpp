struct TrieNode {
    TrieNode *child[26];
    bool isEnd = false;

    TrieNode() {
        for (int i = 0; i < 26; i++) {
            child[i] = nullptr;
        }
    }
};

void insertTrie(string st) {
    TrieNode *curr = nullptr;

    for (int i = 0; i < key.size(); i++) {
        if (curr->child[key[i] - 'a'] == nullptr) {
            TrieNode *newNode = new TrieNode();
            curr->child[key[i] - 'a'] = newNode;
        }
        curr = curr->child[key[i] - 'a'];
    }

    curr->isEnd = true;
}