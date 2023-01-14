string rearrangeString(string str) {
    unordered_map<char, int> mp;
    priority_queue<pair<int, char>> pq;
    string ans = "";
    
    for (char c : str) {
        mp[c]++;
    }
    
    for (pair<char, int> el : mp) {
        pq.push({el.second, el.first});
    }
    
    pair<int, char> prev = pq.top();
    pq.pop();
    ans += prev.second;
    prev.first--;
    
    while (pq.empty() == false) {
        pair<int, char> curr = pq.top();
        pq.pop();
        ans += curr.second;
        curr.first--;
        
        if (prev.first > 0) {
            pq.push(prev);
        }
        prev = curr;
    }
    return ans;
}