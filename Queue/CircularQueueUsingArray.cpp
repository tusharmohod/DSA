class circularQueueUsingArray {
	public:
	int cap;
	int size;
	int front;
	int *arr;

	circularQueueUsingArray(int _cap) {
		cap = _cap;
		size = 0;
		front = -1;
		arr = new int[cap];
	}

	bool isFull() {
		return (size == cap);
	}

	bool isEmpty() {
		return (size == 0);
	}

	int getFront() {
		return (isEmpty()) ? -1 : front;
	}

	int getRear() {
		return (isEmpty()) ? -1 : (front + size - 1) % cap;
	}

	void enqueue(int x) {
		if(isFull()) {
			cout << "Queue is full" << endl;
			return;
		}
		int rear = getRear();
		rear = (rear + 1) % cap;
		arr[rear] = x;
		size++;
	}

	void dequeue() {
		if(isEmpty()) {
			cout << "Queue is empty" << endl;
			return;
		}
		front = (front + 1) % cap;
		size--;
	}

};