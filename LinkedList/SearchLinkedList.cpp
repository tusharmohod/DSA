int searchLinkedList(ListNode *head, int target) {
	ListNode *curr = head;
	int pos = 1;
	while(curr) {
		if(curr->data == target) {
			return pos;
		}
		curr = curr->next;
		pos++;
	}
	return -1;
}