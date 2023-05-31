SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode*  n = new SinglyLinkedListNode(data);
    SinglyLinkedListNode*  p = llist ;
    for(int i = 0 ; i< position-1 ; i++){
        p=p->next;
    }
    
    n->next = p->next;
    p->next = n;
    
    return llist;
    
    
    

}