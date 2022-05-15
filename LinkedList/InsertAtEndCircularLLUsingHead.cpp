Node* insertAtEndCircularLLUsingHead(Node *head, int data) {
	Node *newNode = new Node(data);
	if(!head) {
		newNode->next = newNode;
		return newNode;
	}
	newNode->next = head->next;
	head->next = newNode;
	swap(newNode->data, head->data);
	head = head->next;
}