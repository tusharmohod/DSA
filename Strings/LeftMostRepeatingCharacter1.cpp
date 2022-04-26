int leftMostRepeatingCharacter1(string s) {
	const int charCount = 256;
	int fIndex[charCount] = {-1};
	int res = INT_MAX;
	for(int i = 0; i < s.length(); i++) {
		int index = fIndex[s[i]];
		if(index == -1) {
			fIndex[s[i]] = i;
		}
		else {
			res = min(res, index);
		}
	}
	return (res == INT_MAX) ? -1 : res;
}