class queueUsingStackPopCostly {
	stack<int> s1, s2;
	int size;
	queueUsingStackPopCostly() {
		size = 0;
	}

	void push(int x) {
		s1.push(x);
		size++;
	}

	int pop() {
		if(s1.empty()) {
			cout << "Queue is empty" << endl;
			return -1;
		}
		int n = size;
		while(n > 1) {
			s2.push(s1.top());
			s1.pop();
			n--;
		}
		int ret = s1.top();
		s1.pop();
		while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
		size--;
	}
};