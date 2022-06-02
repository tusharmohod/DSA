class BrowserHistory {
    public:
    class Node {
        public:
        string val;
        Node *prev, *next;
        Node(string _val) {
            val = _val;
            prev = NULL;
            next = NULL;
        }
    };
    Node *head;
    Node *tail;
    BrowserHistory(string homepage) {
        head = NULL;
        tail = NULL;
        Node *nn = new Node(homepage);
        head = nn;
        tail = nn;
    }
    
    void visit(string url) {
        Node *nn = new Node(url);
        if(tail->next) {
            Node *c = tail;
            while(c->next) {
                Node *t = c->next;
                c->next = t->next;
                delete(t);
            }
        }
        tail->next = nn;
        nn->prev = tail;
        tail = nn;
    }
    
    string back(int steps) {
        while(steps-- && tail->prev) {
            tail = tail->prev;
        }
        return tail->val;
    }
    
    string forward(int steps) {
        while(steps-- && tail->next) {
            tail = tail->next;
        }
        return tail->val;
    }
};