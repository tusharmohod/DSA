class queueUsingStackPushCostly {
	stack<int> s1, s2;
	queueUsingStackPushCostly() {

	}

	void push(int x) {
		while(!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}
		s1.push(x);
		while(!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}

	int pop() {
		if(s1.empty()) {
			cout << "Queue is empty" << endl;
			return -1;
		}
		int ret = s1.top();
		s1.pop();
		return ret;
	}
};