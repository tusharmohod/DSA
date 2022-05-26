void generateNumberWithGivenDigits(int n) {
	queue<string> q;
	q.push("5");
	q.push("6");

	for(int i = 0; i < n; i++) {
		string t = q.front();
		cout << t << " ";
		q.pop();
		q.push(t + "5");
		q.push(t + "6");
	}
}