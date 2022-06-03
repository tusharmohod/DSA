bool wordPattern(string pattern, string s) {
	unordered_map<char, string> mp1;
	unordered_map<string, char> mp2;
	s += ' ';
	int psize = pattern.size();
	int ssize = 0;
	int j = 0;
	string st = "";

	for (int i = 0; i < s.size(); i++) {
		if(s[i] != ' ') {
			st += s[i];
		} 
		else {
			if(mp1.count(pattern[j]) && mp1[pattern[j]] != st) {
	            return false;
	        }
			if(mp2.count(st) && mp2[st] != pattern[j]) {
	            return false;
	        }
			mp2[st] = pattern[j];
			mp1[pattern[j]] = st;
	        j++;
			ssize++;
			st = "";
		}
	}
	return (psize == ssize);
}