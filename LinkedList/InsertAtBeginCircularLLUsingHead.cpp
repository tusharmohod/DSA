Node* insertAtBeginCircularLLUsingHead(Node *head, int data) {
	Node *newNode = new Node(data);
	if(head == nullptr) {
		newNode->next = newNode;
		return newNode;
	}
	newNode->next = head->next;
	head->next = newNode;
	swap(head->data, newNode->data);
	return head;
}