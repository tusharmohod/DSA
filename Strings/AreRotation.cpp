bool areRotation(string s, string p) {
	if(s.length() != p.length()) {
		return false;
	}
	return ((s + s).find(p) != string::npos);
}