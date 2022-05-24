class minStackInO1Space {
	stack<int> s;
	int min;
	minStackInO1Space() {
		min = 0;
	}

	void push(int value) {
		if(s.empty()) {
			s.push(value);
			min = value;
		}
		else if(value <= min) {
			s.push(value - min);
			min = value;
		}
		else {
			s.push(value);
		}
	}

	int pop() {
		if(s.empty()) {
			cout << "Stack UnderFlow" << endl;
			return -1;
		}
		if(s.top() <= 0) {
			int ret = min;
			min = min - s.top();
			s.pop();
			return ret;
		}
		else {
			int ret = s.pop();
			if(s.empty()) {
				min = 0;
			}
			return ret;
		}
	}

	int getMin() {
		return min;
	}

	int top() {
		if(s.empty()) {
			return -1;
		}
		int t = s.top();
		return (t <= 0) ? min : t;
	}
};