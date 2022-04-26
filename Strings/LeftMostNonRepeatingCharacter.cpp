int leftMostNonRepeatingCharacter(string s) {
	const int charCount = 256;
	int count[charCount];
	fill(count, count + charCount, 0);
	for(int i = 0; i < s.length(); i++) {
		count[s[i]] += 1;
	}
	for(int i = 0; i < s.length(); i++) {
		if(count[s[i]] == 1) {
			return i;
		}
	}
	return -1;
}