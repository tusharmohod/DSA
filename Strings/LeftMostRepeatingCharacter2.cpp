int leftMostRepeatingCharacter2(string s) {
	const int charCount = 256;
	bool visited[charCount];
	fill(visited, visited + charCount, false);
	int res = -1;
	for(int i = s.length() - 1; i >= 0; i--) {
		if(visited[s[i]]) {
			res = i;
		}
		else {
			visited[s[i]] = true;
		}
	}
	return res;
}