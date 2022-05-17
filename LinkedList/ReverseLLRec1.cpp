Node* reverseLLRec1(Node* prev, Node* curr) {
	if(curr == NULL) {
		return prev;
	}
	Node *next = curr->next;
	curr->next = prev;
	return reverseLLRec1(curr, next);
}