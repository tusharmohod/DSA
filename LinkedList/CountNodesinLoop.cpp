int countNodesinLoop(struct Node *head) {
    if(!head || !head->next) {
        return 0;
    }
    Node* slow = head;
    Node* fast = head;
    while(fast && fast->next) {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast) {
            break;
        }
    }
    if(slow != fast) {
        return 0;
    }
    int count = 1;
    slow = slow->next;
    while(fast != slow) {
        slow = slow->next;
        count++;
    }
    return count;
}