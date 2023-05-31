SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
    
    SinglyLinkedListNode* p =llist;
    SinglyLinkedListNode* q =NULL;
    
    
    if(position == 0){
        p=llist;
        llist = llist->next;
        delete(p);
    }
    else{
        for(int i = 0 ; i< position;i++){
        q = p;
        p=p->next;
    }
        
    
    q->next =p->next;
    delete(p);
    }
    
    return llist;

}