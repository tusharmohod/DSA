Node* reverseLLRec2(Node *prev, Node *curr) {
	if(curr == NULL) {
		return NULL;
	}
	Node *res = reverseLLRec2(curr, curr->next);
	curr->next = prev;
	return (res == NULL) ? curr : res;
}