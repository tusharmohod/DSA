Node* deleteDuplicatesFromSortedList1(Node* head) {    
    if(!head) {
        return NULL;
    }
    Node *curr = head;
    while(curr && curr->next) {
        if(curr->data != curr->next->data) {
            curr = curr->next;
        }
        else {
            Node *temp = curr->next;
            curr->next = temp->next;
            delete(temp);
        }
    }
    return head;
}