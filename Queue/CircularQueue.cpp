class Node {
    public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class CircularQueue {
    public:
    int cap;
    int size;
    Node *head, *tail;
    CircularQueue(int k) {
        cap = k;
        size = 0;
        head = NULL;
        tail = NULL;
    }
    
    bool enQueue(int value) {
        if(isFull()) return false;
        Node *nn = new Node(value);
        if(head == NULL) {
            head = nn;
            tail = nn;
        }
        else {
            tail->next = nn;
            tail = nn;
        }
        size++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()) return false;
        Node *t = head;
        head = head->next;
        delete(t);
        size--;
        return true;
    }
    
    int Front() {
        return (isEmpty()) ? -1 : head->data; 
    }
    
    int Rear() {
        return (isEmpty()) ? -1 : tail->data;
    }
    
    bool isEmpty() {
        return (size == 0);
    }
    
    bool isFull() {
        return (size == cap);
    }
};