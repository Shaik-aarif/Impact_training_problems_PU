#include <bits/stdc++.h>
using namespace std;
class node{
    public: 
        int val;
        node* next;

        node(int data){
            val = data;
            next = NULL;
        }
};

void insertAtTail(node* &head , int val){

    node* temp = head;
    node* n = new node(val);
    if(head == 0){
     head = n ;
       return; 
    }
    while(temp->next != 0){
        temp = temp->next;
    }
    temp->next = n;


}

int main(){

    node* head = NULL;

    return 0;
}