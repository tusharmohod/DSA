int cycleSortWithDuplicates(int arr[], int n) {
    int writes = 0;
	
    for (int cs = 0; cs <= n - 2; cs++) {
        int item = arr[cs];
        int pos = cs;
		
        for (int i = cs + 1; i < n; i++) {
            if (arr[i] < item) {
                pos++;
			}
		}

        if (pos == cs) {
            continue;
		}
		
        while (item == arr[pos]) {
            pos++;
		}
		
        if (pos != cs) {
            swap(item, arr[pos]);
            writes++;
        }
		
        while (pos != cs) {
            pos = cs;
			
            for (int i = cs + 1; i < n; i++) {
                if (arr[i] < item) {
                    pos += 1;
				}
			}
				
            while (item == arr[pos]) {
                pos++;
			}
			
            if (item != arr[pos]) {
                swap(item, arr[pos]);
                writes++;
            }
        }
    }
	
	return writes;
}