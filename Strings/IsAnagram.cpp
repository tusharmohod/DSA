bool isAnagram(string s1, string s2) {
	if(s1.length() != s2.length()) {
		return false;
	}
	const int charCount = 256;
	int count[charCount] = {0};
	for(int i = 0; i < s1.length(); i++) {
		count[s1[i]] += 1;
		count[s2[i]] -= 1;
	}
	for(int i = 0; i < charCount; i++) {
		if(count[i] != 0) {
			return false;
		}
	}
	return true;
}