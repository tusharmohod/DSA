class Node {
    public:
    int data;
    Node *prev;
    Node *next;
    Node(int _data) {
        data = _data;
        next = NULL;
        prev = NULL;
    }
};

class DoubleEndedQueueUsingDLL {
    public:
    Node *front;
    Node *rear;
    
    DoubleEndedQueueUsingDLL() {
        front = NULL;
        rear = NULL;
    }
    
    bool isEmpty() {
        return rear == NULL;
    }
    
    void insertFront(int x) {
        Node *nn = new Node(x);
        if(front == NULL) {
            front = nn;
            rear = nn;
        }
        else {
            nn->next = front;
            front->prev = nn;
            front = nn;
        }
    }
    
    void insertRear(int x) {
        Node *nn = new Node(x);
        if(rear == NULL) {
            front = nn;
            rear = nn;
        }
        else {
            rear->next = nn;
            nn->prev = rear;
            rear = nn;
        }
    }
    
    void deleteFront() {
        if(isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *t = front;
        front = front->next;
        if(front) {
            front->prev = NULL;
        }
        else {
            rear = NULL;
        }
        delete(t);
    }
    
    void deleteRear() {
        if(isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *t = rear;
        rear = rear->prev;
        if(rear) {
            rear->next = NULL;
        }
        else {
            front = NULL;
        }
        delete(t);
    }
    
    void print() {
        if(isEmpty()) {
            cout << "Queue is empty" << endl;
            return;
        }
        Node *curr = front;
        while(curr) {
            cout << curr->data << " ";
            curr = curr->next;
        }
        cout << endl;
    }
    
};