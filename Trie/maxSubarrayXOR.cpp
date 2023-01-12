struct TrieNode {
    TrieNode *children[2];
    int value;
    bool isLeaf;
    
    TrieNode() {
        value = 0;
        isLeaf = false;
        children[0] = nullptr;
        children[0] = nullptr;
    }
};
    
void insert(TrieNode *root, int value) {
    TrieNode *curr = root;
    
    for (int i = 31; i >= 0; i--) {
        int bit = (value & (1 << i)) ? 1 : 0;
        if (curr->children[bit] == nullptr) {
            curr->children[bit] = new TrieNode();
        }
        curr = curr->children[bit];
    }
    
    curr->value = value;
    curr->isLeaf = true;
}

int search(TrieNode *root, int value) {
    TrieNode *curr = root;
    
    for (int i = 31; i >= 0; i--) {
        int bit = (value & (1 << i)) ? 1 : 0;
        
        if (curr->children[1 - bit] != nullptr) {
            curr = curr->children[1 - bit];
        } else if (curr->children[bit] != nullptr) {
            curr = curr->children[bit];
        }
    }
    
    return (curr->value ^ value);
}

int maxSubarrayXOR(int arr[], int n) {
    TrieNode *root = new TrieNode();
    int result = 0;
    
    for (int i = 1; i < n; i++) {
        arr[i] = arr[i - 1] ^ arr[i];
    }
    
    for (int i = 0; i < n; i++) {
        insert(root, arr[i]);
    }
    
    result = arr[0];
    
    for (int i = 0; i < n; i++) {
        int v = search(root, arr[i]);
        result = max(result, v);
    }
    
    return result;
}
