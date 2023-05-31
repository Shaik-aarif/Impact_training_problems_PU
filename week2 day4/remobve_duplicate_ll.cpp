SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* llist) {
    SinglyLinkedListNode* p = llist->next;
    SinglyLinkedListNode* q = llist;
    SinglyLinkedListNode* temp;
    
    while(p!=NULL){
        
    if(p->data != q->data){
        q= p;
        p = p->next;
    }
    else{
        q->next = p->next;
        temp = p;
        p = p->next;
        delete(temp);
    }
    }
    
    return llist;
}