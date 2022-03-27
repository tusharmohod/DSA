vector<int> intersectionofTwoArraysWithDuplicates(vector<int>& n1, vector<int>& n2) {
    vector<int> r;
    unordered_map<int, int> m;
    for(int i=0;i<n1.size();i++){
        m[n1[i]]++;
    }
    for(int i=0;i<n2.size();i++){
        auto it=m.find(n2[i]);
        if(it!=m.end()){
            if((it->second)>0){
                r.push_back(n2[i]);
                (it->second)--;
            }
        }
    }
    return r;
}