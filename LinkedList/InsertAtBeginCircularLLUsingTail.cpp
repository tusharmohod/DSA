Node* insertAtBeginCircularLLUsingTail(Node *tail, int data) {
	Node *newNode = new Node(data);
	if(!tail) {
		newNode->next = newNode;
		return newNode;
	}
	newNode->next = tail->next;
	tail->next = newNode;
	return tail;
}