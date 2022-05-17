Node* insertAtBeginCircularDoubleLL(Node *head, int x) {
	Node *newNode = new Node(x);
    if(!head) {
        newNode->next = newNode;
        newNode->prev = newNode;
        return newNode;
    }
    newNode->next = head;
    newNode->prev = head->prev;
    head->prev = newNode;
    head = newNode;
    head->prev->next = newNode;
    return newNode;
}