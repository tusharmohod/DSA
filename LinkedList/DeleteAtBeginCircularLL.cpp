Node* deleteAtBeginCircularLL(Node *head) {
	if(head == NULL) {
        return NULL;
    }
    if(head->next == head) {
        delete(head);
        return NULL;
    }
    Node *temp = head->next;
    swap(head->data, temp->data);
    head->next = temp->next;
    delete(temp);
    return head;
}