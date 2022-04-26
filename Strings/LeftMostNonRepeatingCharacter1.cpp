int leftMostNonRepeatingCharacter1(string s) {
	const int charCount = 256;
	int fIndex[charCount];
	fill(fIndex, fIndex + charCount, -1);
	int res = INT_MAX;
	for(int i = 0; i < s.length(); i++) {
		int index = fIndex[s[i]];
		if(index == -1) {
			fIndex[s[i]] = i;
		}
		else {
			fIndex[s[i]] = -2;
		}
	}
	for(int i = 0; i < charCount; i++) {
		if(fIndex[i] >= 0) {
			res = min(res, fIndex[i]);
		}
	}
	return (res == INT_MAX) ? -1 : res;
}