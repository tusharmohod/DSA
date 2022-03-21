vector<int> leaders(int arr[], int n) {
    vector<int> res;
    
    int leading = arr[n - 1];
    res.push_back(arr[n - 1]);

    for(int i = n - 2; i >= 0; i--) {
        if(arr[i] > leading) {
            leading = arr[i];
            res.push_back(leading);
        }
    }

    return res;
}