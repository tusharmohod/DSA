void countFrequency(vector<int> &arr) {
	unordered_map<int, int> mp;
	for(int i = 0; i < arr.size(); i++) {
		mp[arr[i]]++;
	}
	for(auto itr = mp.begin(); itr != mp.end(); itr++) {
		cout << itr->first << " " << itr->second << endl;
	}
}