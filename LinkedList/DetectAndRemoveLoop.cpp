Node* detectAndRemoveLoop(Node* head) {
    if(!head) return NULL;
    
    Node* slow = head;
    Node* fast = head;
    bool hasLoop = false;
    
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            hasLoop = true;
            break;
        }
    }
    
    if(!hasLoop) {
        return head;
    }
    
    slow = head;
    if(slow == fast) {
        fast = fast->next;
        while(fast->next != slow) {
            fast = fast->next;
        }
        fast->next = NULL;
    }
    else {
        while(slow->next != fast->next) {
            slow = slow->next;
            fast = fast->next;
        }
        fast->next = NULL;
    }
    return head;
    
}