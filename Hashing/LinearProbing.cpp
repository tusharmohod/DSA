vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray) {
    vector<int> ht(hashSize, -1);
    for(int i = 0; i < sizeOfArray; i++) {
        int index = arr[i] % hashSize;
        if(ht[index] == arr[i]) {
            continue;
        }
        else if(ht[index] == -1) {
            ht[index] = arr[i];
        }
        else {
            int j = 1;
            while(j < hashSize) {
                int i2 = (index + j) % hashSize;
                if(ht[i2] == arr[i]) {
                    break;
                }
                else if(ht[i2] == -1) {
                    ht[i2] = arr[i];
                    break;
                }
                j += 1;
            }
        }
    }
    return ht;
}