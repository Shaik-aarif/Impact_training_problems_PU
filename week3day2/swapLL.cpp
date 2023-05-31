#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int data){
            this->data = data;
            next = NULL;
        }
};

void insertAtTail(node* &head , int data){

    node* n = new node(data);
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;

}

void insertAtHead(node* &head , int data ){
    node* n = new node(data);
    n->next = head;
    head = n ;
}
void display(node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL"<<endl;;
}

bool search(node* head , int key){

    while(head != NULL){
        if(head->data == key ){
            return true;
        }
        head = head->next;
    }
    return false;

}

int nodeCnt(node* head ){
    int cnt = 0 ;
    while(head != NULL){
        cnt++;
        head = head->next;
    }
    return cnt;
}





int main(){
    
    node* head = NULL;

    


    int n ;
    cin>>n ;
    int a[n];
    for(int i = 0 ; i< n ; i++){
        cin>>a[i];
    insertAtTail(head,a[i]);
    }

    display(head);

    node* p = head ;
    node* temp_p;
    node* temp_q ;
    int cnt = 0 ;
    while(p!=NULL){
        if(cnt == 0){
            temp_p = p;
            temp_q = p->next;
            p  = p->next->next;
            temp_p->next = temp_q->next;
            temp_q->next = temp_p;
            head = temp_q;
            cnt++;
        }else{
             temp_p = p;
            temp_q = p->next;
            p  = p->next->next;
            temp_p->next = temp_q->next;
            temp_q->next = temp_p;
        }
    }

    display(head);

    while(head!= NULL){
        cout<<head->data<<"->";
    }






    return 0;
}