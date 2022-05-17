Node* reverseLLRec(Node *head) {
	if(head == NULL || head->next == NULL) {
		return head;
	}
	Node* newHead = reverseLLRec(head->next);
	Node* newTail = head->next;
	newTail->next = head;
	head->next = NULL;
	return newHead;
}