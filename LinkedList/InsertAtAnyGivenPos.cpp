void insertAtAnyGivenPos(ListNode *head, int pos, int data) {
	ListNode *newNode = new ListNode(data);
	if(!head) {
		head = newNode;
		return;
	}
	if(pos == 1) {
		newNode->next = head;
		head = newNode;
		return;
	}

	ListNode *curr = head;

	for(int i = 1; curr && i < (pos - 1); i++) {
		curr = curr->next;
	}

	if(!curr) {
		return head;
	}

	newNode->next = curr->next;
	curr->next = newNode;
}