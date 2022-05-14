Node* deleteAtEndLL(Node *head) {
	if(!head) {
		return NULL;
	}
	if(!head->next) {
		delete(head);
		return NULL;
	}

	Node *curr = head;

	while(curr->next->next) {
		curr = curr->next;
	}
	delete(curr->next);
	curr->next = NULL;
	return head;
}