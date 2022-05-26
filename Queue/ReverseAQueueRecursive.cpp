void reverseAQueueRecursive(queue<int> &q) {
	if(q.empty()) {
		return;
	}
	int t = q.front();
	q.pop();
	reverseAQueueRecursive(q);
	q.push(t);
}