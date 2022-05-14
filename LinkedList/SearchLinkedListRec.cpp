int searchLinkedListRec(ListNode *head, int target) {
	if(head == nullptr) {
		return -1;
	}
	if(head->val == target) {
		return 1;
	}
	else {
		int ans = searchLinkedListRec(head->next, target);
		if(ans == -1) {
			return -1;
		}
		else {
			return ans + 1;
		}
	}
}