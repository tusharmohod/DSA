int countSetBitsLookupMethod(int n) {
	int setBitTable[256];
	
	setBitTable[0] = 0;
	for(int i = 1; i < 256; i++) {
		setBitTable[i] = (i & 1) + setBitTable[i / 2];
	}
	
	int res = setBitTable[n & 0xff];
	n = n >> 8;
	res += setBitTable[n & 0xff];
	n = n >> 8;
	res += setBitTable[n & 0xff];
	n = n >> 8;
	res += setBitTable[n & 0xff];
	
	return res;
}