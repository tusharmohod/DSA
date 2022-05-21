class Node {
    public:
    int data;
    Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class CircularDeque {
    public:
    int cap;
    int size;
    Node *head;
    Node *tail;
    
    CircularDeque(int k) {
        cap = k;
        size = 0;
        head = NULL;
        tail = NULL;
    }
    
    bool insertFront(int value) {
        if(isFull()) return false;
        Node *nn = new Node(value);
        if(tail == NULL) {
            tail = nn;
            tail->next = nn;
        }
        else {
            nn->next = tail->next;
            tail->next = nn;
        }
        size++;
        return true;
    }
    
    bool insertLast(int value) {
        if(isFull()) return false;
        Node *nn = new Node(value);
        if(tail == NULL) {
            tail = nn;
            tail->next = nn;
        }
        else {
            nn->next = tail->next;
            tail->next = nn;
            tail = nn;
        }
        size++;
        return true;
    }
    
    bool deleteFront() {
        if(isEmpty()) return false;
        if(tail->next == tail) {
            Node *t = tail;
            delete(t);
            tail = NULL;
        }
        else {
            Node *t = tail->next;
            tail->next = t->next;
            delete(t);
        }
        size--;
        return true;
    }
    
    bool deleteLast() {
        if(isEmpty()) return false;
        if(tail->next == tail) {
            Node *t = tail;
            delete(t);
            tail = NULL;
        }
        else {
            Node *t = tail->next;
            while(t->next != tail) {
                t = t->next;
            }
            Node *de = t->next;
            t->next = de->next;
            tail = t;
            delete(de);
        }
        size--;
        return true;
    }
    
    int getFront() {
        return (isEmpty()) ? -1 : tail->next->data;
    }
    
    int getRear() {
        return (isEmpty()) ? -1 : tail->data;
    }
    
    bool isEmpty() {
        return (size == 0);
    }
    
    bool isFull() {
        return (size == cap);
    }
};