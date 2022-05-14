Node *deleteAtBeginDoublyLL(Node *head) {
	if(!head) {
		return NULL;
	}
	Node *t = head;
	head = head->next;
	if(head != NULL) {
		head->prev = NULL;
	}
	delete(t);
	return head;
}