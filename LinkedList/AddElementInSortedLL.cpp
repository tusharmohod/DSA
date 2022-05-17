Node* addElementInSortedLL(Node *head, int x) {
	Node *newNode = new Node(x);
    if(head == NULL) {
        return newNode;
    }
    if(newNode->data < head->data) {
        newNode->next = head;
        return newNode;
    }
    Node *curr = head;
    while(curr->next && newNode->data > curr->next->data) {
        curr = curr->next;
    }
    newNode->next = curr->next;
    curr->next = newNode;
    return head;
}