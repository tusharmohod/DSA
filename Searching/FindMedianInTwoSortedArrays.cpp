double findMedianInTwoSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        int n1 = arr1.size();
        int n2 = arr2.size();
        
        if(n1 > n2) {
            return findMedianSortedArrays(arr2, arr1);
        }
        
        int s = 0;
        int e = n1;
		
        while(s <= e) {
            int i1 = (s + e) / 2;
            int i2 = ((n1 + n2 + 1) / 2) - i1;
            
			int max1 = (i1 > 0) ? arr1[i1 - 1] : INT_MIN;
            int max2 = (i2 > 0) ? arr2[i2 - 1] : INT_MIN;
			
            int min1 = (i1 < n1) ? arr1[i1] : INT_MAX;
            int min2 = (i2 < n2) ? arr2[i2] : INT_MAX;
            
            if(max1 <= min2 and max2 <= min1) {
                if((n1 + n2) % 2 == 0) {
                    return (max(max1, max2) + min(min1, min2))/ 2.0;
                }
                else {
                    return max(max1, max2);
                }
            }
            else if(max1 > min2) {
                e = i1 - 1;
            }
            else {
                s = i1 + 1;
            }
        }
        
        return 0.0;
    }