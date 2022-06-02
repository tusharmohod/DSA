Node *h = NULL;
Node *t = NULL;

void myFunc(Node* head) {
    if(!head) return;
    Node *nn = new Node(head->val);
    if(!h) {
        h = nn;
        t = nn;
    }
    else {
        t->next = nn;
        nn->prev = t;
        t = nn;
    }
    nn->child = NULL;
    myFunc(head->child);
    myFunc(head->next);
}

Node* flattenMultilevelDoublyLinkedList(Node* head) {
    myFunc(head);
    return h;
}