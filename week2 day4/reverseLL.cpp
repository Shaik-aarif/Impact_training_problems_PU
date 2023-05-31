SinglyLinkedListNode* reverse(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* p = llist;
    SinglyLinkedListNode* q = NULL;
    SinglyLinkedListNode* r = NULL;
    
    while(p!= 0){
        r=q;
        q=p;
        p=p->next;
        q->next =r;
    }
    llist = q;
    
    return llist;
}