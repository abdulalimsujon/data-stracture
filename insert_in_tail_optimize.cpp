#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int value;
    Node* next;

    Node(int value){
        this->value = value;
        this->next = NULL;
    }
};

void display(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout << temp->value << " ";
         temp =  temp->next ;
    }
};


void insert_at_head(Node* &head,int value){

    Node* newNode = new Node(value);
    newNode->next = head; 
    head = newNode;

};
void insert_at_tail(Node* &head,Node* &tail,int value){

   Node* newNode = new Node(value);

    if(head==NULL){
     head = newNode;
     tail = newNode;
     return;
    }
    // Node* temp = head;
    // while(temp->next!=NULL){    
    //      temp=temp->next;
    // }
    tail->next = newNode;
    // tail = tail->next;
    tail = newNode;



};
void insert_at_any_position(Node* &head,int index,int value){

   Node* newNode = new Node(value);
   Node* temp = head;
   for(int i =1;i<index;i++){
     temp =  temp->next ;
   }
   newNode->next = temp->next;
   temp->next = newNode;

};


int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->next = b;
    b->next = tail;

    insert_at_head(head,100);
    insert_at_any_position(head,4,5);
     insert_at_tail(head,tail,150);
  
    display(head);
    

}