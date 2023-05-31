SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
if(head1 == 0)return head2;
if(head2 == 0)return head1;

if(head1->data > head2->data){
    swap(head1 , head2);
}

SinglyLinkedListNode* res = head1;
while(head1!=0 && head2!= 0 ){
    SinglyLinkedListNode* temp = NULL;
    while(head1!= 0   && head1->data <= head2->data){
        temp = head1;
        head1 = head1->next;
    }
    temp->next = head2;
    swap(head1,head2);
}

return res;
    
    
}
