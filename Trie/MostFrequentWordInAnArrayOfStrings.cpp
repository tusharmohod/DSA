struct TrieNode {
    TrieNode *children[26];
    bool isEnd;
    int count;
    int firstIndex;
    
    TrieNode() {
        isEnd = false;
        count = 0;
        firstIndex = -1;
        
        for (int i = 0; i < 26; i++) {
            children[i] = nullptr;
        }
    }
};

void solve(TrieNode *root, int &index, string &st, int &mx, int &resultIndex) {
    TrieNode *curr = root;
    
    for (int i = 0; i < st.size(); i++) {
        int index = st[i] - 'a';
        if (curr->children[index] == nullptr) {
            curr->children[index] = new TrieNode();
        }
        curr = curr->children[index];
    }
    
    curr->isEnd = true;
    curr->count++;
    
    if (curr->firstIndex == -1) {
        curr->firstIndex = index;
    }
    
    if (curr->count == mx && curr->firstIndex > resultIndex) {
        resultIndex = curr->firstIndex;
    }   
    
    if (curr->count > mx) {
        mx = curr->count;
        resultIndex = curr->firstIndex;
    }
}
    
string mostFrequentWordInAnArrayOfStrings(string arr[], int n) {
    TrieNode* root = new TrieNode();
    int mx = 0;
    int resultIndex = -1;
    
    for (int i = 0; i < n; i++) {
        solve(root, i, arr[i], mx, resultIndex);
    }
    
    return arr[resultIndex];
}