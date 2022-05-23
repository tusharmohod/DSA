class kStacks {
	public:
	int cap, k, freeTop;
	int *arr, *next, *top;

	kStacks(int _k, int _cap) {
		k = _k;
		cap = _cap;
		arr = new int[cap];
		next = new int[cap];
		top = new int[k];
		freeTop = 0;
		for(int i = 0; i < k; i++) {
			top[i] = -1;
		}
		for(int i = 0; i < cap - 1; i++) {
			next[i] = i + 1;
		}
		next[cap - 1] = -1;
	}

	bool isEmpty(int stackNumber) {
		return top[stackNumber] == -1;
	}

	bool isFull() {
		return freeTop = -1; 
	}

	void push(int stackNumber, int value) {
		if(isFull()) {
			cout << "Stack Overflow" << endl;
			return;
		}
		int index = freeTop;
		arr[index] = value;
		freeTop = next[index];
		next[index] = top[stackNumber];
		top[stackNumber] = index;
	}

	int pop(int stackNumber) {
		if(isEmpty()) {
			cout << "Stack Undeflow" << endl;
			return -1;
		}

		int index = top[stackNumber];
		top[stackNumber] = next[index];
		next[index] = freeTop;
		freeTop = index;
		return arr[index];
	}
};