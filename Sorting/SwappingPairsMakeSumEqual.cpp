int swappingPairsMakeSumEqual(int A[], int n, int B[], int m) {
	sort(A,A+n);
	sort(B,B+m);

	int sum1 = 0;
	int sum2 = 0;

	for(int i = 0; i < n; i++) {
	    sum1 += A[i];
	}

	for(int i = 0; i < m; i++) {
	    sum2 += B[i];
	}

	int i = 0;
	int j = 0;

	while(i < n && j < m) {
	    int s1 = sum1 - A[i] + B[j];
	    int s2 = sum2 - B[j] + A[i];
	    if(s1 == s2) { 
	    	return 1;
	    }
	    else if(s1 > s2) {
	    	i++;
	    } 
	    else {
	    	j++;
	    }
	}
	return -1;
}