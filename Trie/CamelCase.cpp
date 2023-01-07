struct TrieNode {
    TrieNode* children[26];
    bool isEnd;
    vector<string> matches;
    
    TrieNode() {
        isEnd = false;

        for (int i = 0; i <26; i++) {
            children[i] = nullptr;
        }
    }
};

void createTrie(TrieNode* root, vector<string>& dict) {
    TrieNode *curr = nullptr;
    
    for (string word : dict) {
        curr = root;

        for (char letter : word) {
            if (letter >= 'A' && letter <= 'Z') {
                int index = letter - 'A';
                
                if (curr->children[index] == nullptr) {
                    curr->children[index] = new TrieNode();
                }

                curr = curr->children[index];
            }
        }

        curr->isEnd = true;
        curr->matches.push_back(word);
        
        sort(curr->matches.begin(), curr->matches.end());
    }
}


void print(TrieNode *curr){
    if(curr->isEnd == true) {
       for(string i : curr->matches) {
           cout << i << " ";
       }
    }
    
    for(int i = 0; i < 26; i++) {
       TrieNode *temp = curr->children[i];

       if (temp != nullptr) {
           print(temp);
       }
    }
}


void CamelCase(vector<string> dict, string pattern) {
    TrieNode *root = new TrieNode();
    TrieNode *curr = root;
    string answer = "";

    createTrie(root, dict);
    
    for (char letter : pattern) {
        answer += letter;
        int index = letter - 'A';
        
        if (curr->children[index] == nullptr) {
            cout << "No match found";
            return;
        }
        
        curr = curr->children[index];
    }
    
    print(curr);
}