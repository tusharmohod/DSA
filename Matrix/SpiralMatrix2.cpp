void spiralMatrix2(int arr[][], int m, int n) {
	if(n == 1) {
        for(int i = 0; i < m; i++) {
            cout<<arr[0][i]<<" ";
        }
    }
	else if(m == 1) {
        for(int i = 0; i < n; i++) {
            cout << arr[i][0] << " ";
        }
    }
	else {
	    int left = 0, top = 0, bottom = n - 1, right = m - 1;
	    int i=0;
	    while(top <= bottom && left <= right) {
	        for(i = left; i <= right; i++) {
                cout << arr[top][i] << " ";
            }
	        top++;
	        for(i = top; i <= bottom; i++) {
                cout << arr[i][right] << " ";
            }
	        right--;
	        for(i = right; i >= left; i--) {
                cout << arr[bottom][i] << " ";
            }
	        bottom--;
	        for(i = bottom; i >= top; i--) {
                cout << arr[i][left] << " ";
            }
	        left++;
	    }
	}
}