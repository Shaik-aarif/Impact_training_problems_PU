SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode* n  = new SinglyLinkedListNode(data);
    SinglyLinkedListNode* temp  = head;
    
    if(head==0){
        head = n;
        return head;
    }
    while(head->next != 0){
        head=head->next;
    }
    head->next = n;
    return temp;

}