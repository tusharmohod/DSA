string solve(Node* root, string &arr) {
    Node *curr = root;
    bool flag = false;
    string st = "";
    
    for (int i = 0; i < arr.size(); i++) {
        if (flag == false) {
            st += arr[i];
        }
        
        if (curr->mp.find(arr[i]) == curr->mp.end()) {
            flag = true;
            Node* newNode = new Node();
            newNode->count1 = 0;
            curr->mp[arr[i]] = newNode;
        }
        
        curr = curr->mp[arr[i]];
    }
    
    curr->isEndOfWord = true;
    curr->count1++;
    if (curr->count1 > 1) {
        st += ' ' + to_string(curr->count1);
    }
    
    return st;
}

void renamingCities(string *arr, int n){
    vector<string> answer;
    Node *root = new Node();
    root->count1 = 0;
    
    for (int i = 0; i < n; i++) {
        answer.push_back(solve(root, arr[i]));
    }
    
    for (string i : answer) {
        cout << i << endl;
    }
}