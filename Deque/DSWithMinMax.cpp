class DSWithMinMax {
	deque<int> dq;
	
	DSWithMinMax() {
		
	}

	void insertMin(int x) {
		dq.push_front(x);
	}

	void insertMax(int x) {
		dq.push_back(x);
	}

	int getMin() {
		if(dq.empty()) {
			cout << "Deque is empty" << endl;
			return -1;
		}
		return dq.front();
	}

	int getMax() {
		if(dq.empty()) {
			cout << "Deque is empty" << endl;
			return -1;
		}
		return dq.back();
	}

	int extractMin() {
		if(dq.empty()) {
			cout << "Deque is empty" << endl;
			return -1;
		}
		int ret = dq.front();
		dq.pop_front();
		return ret;
	}

	int extractMax() {
		if(dq.empty()) {
			cout << "Deque is empty" << endl;
			return -1;
		}
		int ret = dq.back();
		dq.pop_back();
		return ret;
	}
};