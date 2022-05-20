Node *reverse(Node *head) {
    Node *p = NULL;
    Node *c = head;
    Node *n = NULL;
    while(c) {
        n = c->next;
        c->next = p;
        p = c;
        c = n;
    }
    return p;
}

Node* addSameSize(Node* head1, Node* head2, int* carry) {
    if(!head1) return head2;
    if(!head2) return head1;
    
    Node *res = NULL;
	
	head1 = reverse(head1);
	head2 = reverse(head2);
	
	int ans, rem;
	*carry = 0;
	
	while(head1 && head2) {
	    ans = *carry + head1->data + head2->data;
	    *carry = ans / 10;
	    rem = ans % 10;
	    Node *t = new Node(rem);
	    if(!res) {
	        res = t;
	    }
	    else {
	        t->next = res;
	        res = t;
	    }
	    head1 = head1->next;
	    head2 = head2->next;
	}
	
	return res;
} 

void addCarryToRemaining(Node* head, Node* curr, int* carry, Node** result) {
	head = reverse(head);
	head = curr->next;
	Node *res = *(result);
	int ans, rem;
	while(head) {
	    ans = *carry + head->data;
	    *carry = ans / 10;
	    rem = ans % 10;
	    Node *t = new Node(rem);
	    t->next = res;
	    res = t;
	    head = head->next;
	}
	
	if(*carry) {
	    Node *t = new Node(*carry);
	    t->next = res;
	    res = t;
	    *carry = 0;
	}
	
	*result = res;
}