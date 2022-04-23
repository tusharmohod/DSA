void quadraticProbing(vector <int>&hash, int hashSize, int arr[], int N){
    for(int i = 0; i < N; i++) {
        int index = arr[i] % hashSize;
        if(hash[index] == -1) {
            hash[index] = arr[i];
        }
        if(hash[index] == arr[i]) {
            continue;
        }
        else {
            int j = 1;
            while(j < hashSize) {
                int i2 = (index + (j * j)) % hashSize;
                if(hash[i2] == arr[i]) {
                    break;
                }
                if(hash[i2] == -1) {
                    hash[i2] = arr[i];
                    break;
                }
                j += 1;
            }
        }
    }
}