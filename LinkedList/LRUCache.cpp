class LRUCache {
    public:
    class Node {
        public:
        int key, value;
        Node *prev, *next;
        Node(int k, int v) {
            key = k;
            value = v;
            prev = NULL;
            next = NULL;
        }
    };
    int s;
    unordered_map<int, Node*> mp;
    Node *head = NULL, *tail = NULL;
    
    LRUCache(int capacity) {
        s = capacity;
    }
    
    void moveToFront(Node *temp) {
        temp->prev->next = temp->next;
        if(temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        if(temp == tail) {
            tail = temp->prev;
            tail->next = NULL;
        }
        temp->next = head;
        head->prev = temp;
        temp->prev = NULL;
        head = temp;
    }
    
    int get(int key) {
        if(mp.find(key) != mp.end()) {
            Node *temp = mp[key];
            int ret = temp->value;
            if(temp != head) {
                moveToFront(temp);
            }
            return ret;
        }
        return -1;
    }
    
    void put(int key, int value) {
        if(mp.find(key) == mp.end()) {
            Node *newNode = new Node(key, value);
            if(mp.size() == 0) {
                mp[key] = newNode;
                head = newNode;
                tail = newNode;
                return;
            }
            if(mp.size() == s) {
                int d = tail->key;
                mp.erase(d);
                Node *dl = tail;
                tail = tail->prev;
                if(tail != NULL) {
                    tail->next = NULL;
                }
                else {
                    head = NULL;
                }
                delete(dl);
            }
            if(head) {
                newNode->next = head;
                head->prev = newNode;
            }
            else {
                tail = newNode;
            }
            head = newNode;
            mp[key] = newNode;
        }
        else {
            Node *temp = mp[key];
            if(temp->value != value) {
                temp->value = value;
            }
            if(temp != head) {
                moveToFront(temp);
            }
        }
    }
};