class Node {
    public:
    int val;
    Node *next;
    Node(int x) {
        val = x;
        next = NULL;
    }
};

class designLinkedList {
    public:
    Node *head, *tail;
    int len;
    
    MyLinkedList() {
        head = NULL;
        tail = NULL;
        len = 0;
    }
    
    int get(int index) {
        if(!head || index >= len) {
            return -1;
        }
        Node *curr = head;
        int i = 0;
        while(curr) {
            if(i == index) {
                return curr->val;
            }
            curr = curr->next;
            i++;
        }
        return -1;
    }
    
    void addAtHead(int val) {
        Node* newNode = new Node(val);
        if(!head) {
            tail = newNode;
        }
        else {
            newNode->next = head;
        }
        head = newNode;
        len++;
    }
    
    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if(!head) {
            head = newNode;
        }
        else {
            tail->next = newNode;
        }
        tail = newNode;
        len++;
    }
    
    void addAtIndex(int index, int val) {
        if(index > len) {
            return;
        }
        if(index == 0) {
            addAtHead(val);
        }
        else if(index == len) {
            addAtTail(val);
        }
        else {
            int i = 0;
            Node *curr = head;
            Node *newNode = new Node(val);
            while(i < index - 1) {
                curr = curr->next;
                i++;
            }
            newNode->next = curr->next;
            curr->next = newNode;
            len++;
        }
    }
    
    void deleteAtIndex(int index) {
        if(head) {
            if(index >= len) {
                return;
            }
            if(index == 0) {
                Node *t = head;
                head = head->next;
                delete(t);
                len--;
            }
            else {
                Node *curr = head;
                int i = 0;
                while(i < index - 1) {
                    curr = curr->next;
                    i++;
                }
                Node *t = curr->next;
                if(t == tail) {
                    tail = curr;
                }
                curr->next = t->next;
                delete(t);
                len--;
            }
        }
    }
};