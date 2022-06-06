class DoubleEndedQueueUsingArray {
    public:
    int *arr;
    int front;
    int capacity;
    int size;
    
    DoubleEndedQueueUsingArray(int _capacity) {
        capacity = _capacity;
        arr = new int[capacity];
        front = 0;
        size = 0;
    }
    
    bool isFull() {
        return size == capacity;
    }
    
    bool isEmpty() {
        return size == 0;
    }
    
    void insertFront(int x) {
        if(isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        front = (front + capacity - 1) % capacity;
        arr[front] = x;
        size++;
    }
    
    void insertRear(int x) {
        if(isFull()) {
            cout << "Queue is full" << endl;
            return;
        }
        int newRear = (front + size - 1 + 1) % capacity;
        arr[newRear] = x;
        size++;
    }
    
    void deleteFront() {
        if(isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        front = (front + 1) % capacity;
        size--;
    }
    
    void deleteRear() {
        if(isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        size--;
    }
    
    void print() {
        int e = size;
        if(e == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        int i = front;
        while(e--) {
            cout << arr[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
    
};