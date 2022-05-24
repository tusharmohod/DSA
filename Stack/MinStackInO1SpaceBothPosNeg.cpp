class minStackInO1SpaceBothPosNeg {
	stack<int> s;
	int min;
	minStackInO1SpaceBothPosNeg() {
		min = 0;
	}

	void push(int value) {
		if(s.empty()) {
			s.push(value);
			min = value;
		}
		else if(value <= min) {
			s.push((2 * value) - min);
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
		if(s.top() <= min) {
			int ret = min;
			min = (2 * min) - s.top();
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
		int t = s.top();
		return (t <= min) ? min : t;
	}
};