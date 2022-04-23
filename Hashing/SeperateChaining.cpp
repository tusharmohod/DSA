vector<vector<int>> separateChaining(int hashSize,int arr[],int sizeOfArray){
    vector<vector<int>> res(hashSize, vector<int>());
    
    for(int i = 0; i < sizeOfArray; i++) {
        int index = arr[i] % hashSize;
        res[index].push_back(arr[i]);
    }
    
    return res;
}