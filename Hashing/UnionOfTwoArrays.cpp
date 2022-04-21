int unionOfTwoArrays(vector<int> &a1, vector<int> &a2) {
	unordered_set<int> s;
	
	for(int i = 0; i < a1.size(); i++) {
		s.insert(a1[i]);
	}
	for(int i = 0; i < a2.size(); i++) {
		s.insert(a2[i]);
	}

	return s.size;
}