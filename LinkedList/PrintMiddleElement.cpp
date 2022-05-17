void printMiddleElement(Node *head) {
	if(head == NULL) {
		return;
	}
	Node *slow = head;
	Node *fast = head;

	while(fast && fast->next) {
		slow = slow->next;
		fast = fast->next->next;
	}
	cout << slow->data << endl;
}