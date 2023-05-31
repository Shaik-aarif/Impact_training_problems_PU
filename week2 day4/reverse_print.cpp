void reversePrint(SinglyLinkedListNode* llist) {
    if(llist!=NULL){
    reversePrint(llist->next);
    cout<<llist->data<<endl;
    }
}