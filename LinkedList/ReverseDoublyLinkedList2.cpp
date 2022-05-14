Node* reverseDoublyLinkedList2(Node *head) {
	if(!head || !head->next) {
		return head;
	}

	Node *p = NULL;
	Node *c = head;

	while(c) {
		p = c->prev;
		c->prev = c->next;
		c->next = p;
		c = c->prev;
	}

	return p->prev;
}