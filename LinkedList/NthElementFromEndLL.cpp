void nthElementFromEndLL() {
	if(!head) {
        return NULL;
    }

    Node *first = head;
    Node *second = head;

    for(int i = 0; i < n; i++) {
    	if(first == NULL) {
    		return;
    	}
    	first = first->next;
    }

    while(first) {
    	first = first->next;
    	second = second->next;
    }
    
    cout << second->data << endl;
} 