int majorityElement(int arr[], int n) {
	int c = nums[0];
    int count = 1;
    for(int i = 1; i < nums.size(); i++) {
        if(c == nums[i]) {
            count++;
        }
        else {
            count--;
        }
        if(count == 0) {
            c = nums[i];
            count = 1;
        }
    }
    
    count = 0;
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] == c) {
            count++;
        }
    }

    return (count > (nums.size() / 2)) ? c : -1;
}