struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int count=0;
    struct ListNode* temp =head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    int d=count-n;
    if (d == 0) {
        struct ListNode* newHead = head->next;
        free(head);
        return newHead;
    }

    struct ListNode* prev = head;
    for (int i = 0; i < d - 1; i++) {
        prev = prev->next;
    }

    struct ListNode* nodeToDelete = prev->next;
    prev->next = nodeToDelete->next;
    free(nodeToDelete);

    return head;
}
