int countBitsFlip(int a, int b) {
	int diff = a ^ b;
	int count = 0;
	while(diff > 0) {
		if(diff & 1 == 1) {
			++count;
		}
		diff = diff >> 1;
	}
	return count;
}