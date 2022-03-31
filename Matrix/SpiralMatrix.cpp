void spiralMatrix(int arr[m][n], int m, int n) {
    int n = 4, m = 3;
	if(n == 1){
		for(int i = 0; i < m; i++){
			cout << arr[0][i] << " ";
		}
	}
	else if(m == 1){
		for(int i = 0; i < n; i++){
			cout << arr[i][0] << " ";
		}
	}
	else {
	    int l1 = 0, l2 = 0, r1 = n - 1, r2 = m - 1;
	    int i = 0, j = 0;
	    int count = n * m;
	    while(count > 0) {
	        for(j = l1; j <= r2; j++){
				cout << arr[l1][j] << " ";
				count--;
			}
	        if(count < 1){
				break;
			}
	        i = l1 + 1;
	        for(;i <= r1; i++){
				cout << arr[i][r2] << " ";
				count--;
			}
	        if(count < 1){
				break;
			}
	        j = r2 - 1;
	        for(;j >= l2; j--){
				cout << arr[r1][j] << " ";
				count--;
			}
	        if(count < 1){
				break;
			}
	        i = r1 - 1;
	        l1++;
	        for(;i >= l1; i--){
				cout << arr[i][l2] << " ";
				count--;
			}
	        if(count < 1){
				break;
			}
	        l2++;
	        r1--;
			r2--;
	    }
	}
}