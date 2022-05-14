Node *deleteAtBeginLL(Node *head) {
	if(!head) {
		return NULL;
	}

	Node *t = head;
	head = head->next;
	delete(t);
	return head;
}