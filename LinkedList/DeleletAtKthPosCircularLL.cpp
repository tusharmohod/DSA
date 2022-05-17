Node* deleletAtKthPosCircularLL(Node *head, int k) {
	if(head == NULL) {
		return NULL;
	}
	if(k == 1) {
		if(head->next == head) {
			delete(head);
			return NULL;
		}
		Node *temp = head->next;
		head->data = temp->data;
		head->next = temp->next;
		delete(temp);
		return head;
	}
	else {
		Node *curr = head;
		for(int i = 0; i < k - 2; i++) {
			curr = curr->next;
		}
		Node *temp = curr->next;
		curr->next = temp->next;
		delete(temp);
		return head;
	}
}