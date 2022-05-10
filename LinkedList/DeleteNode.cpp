void deleteNode(ListNode* node) {
    ListNode *t = node;
    while(node->next) {
        node->val = node->next->val;
        if(node->next->next == NULL) {
            t = node->next;
            node->next = NULL;
            break;
        }
        node = node->next;
    }
    delete(t);
}