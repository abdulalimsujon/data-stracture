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

void delete_head(Node* &head){

  Node* deleteNode = head;
  head = head->next;
  delete deleteNode;
}


void insert_at_head(Node* &head,Node* &tail ,int value){

    Node* newNode = new Node(value);
      if(head==NULL){
     head = newNode;
     tail = newNode;
     return;
    }
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
void print_reverse(Node *temp){

  if(temp==NULL){
    return;
  }

  print_reverse(temp->next);

  cout << temp->value << " ";

}
void insert_at_any_position(Node* &head,int index,int value){

   Node* newNode = new Node(value);
   Node* temp = head;
   for(int i =1;i<index;i++){
     temp =  temp->next ;
   }
   newNode->next = temp->next;
   temp->next = newNode;

};

void delete_any_position(Node* head,int idx){

  Node* temp = head;
  
for(int i=1;i<idx;i++){

  temp = temp->next;
    
}

Node* deleteNode = temp->next;

temp->next = temp->next->next;

delete deleteNode;

}

void delete_at_tail(Node* head,Node* tail,int idx){

  Node* temp = head;
  
for(int i=1;i<idx;i++){

  temp = temp->next;
    
}

Node* deleteNode = temp->next;

temp->next = temp->next->next;


delete deleteNode;
tail = temp;

}

void sort(Node* head){

  for(Node* i = head;i->next!=NULL;i=i->next){
    for(Node* j = i->next;j!=NULL;j=j->next){
      if(i->value > j->value){
        swap(i->value,j->value);
      }
    }
  }
}


void reverse_linklist(Node* &head,Node* temp,Node* &tail){
  if(temp->next == NULL){
    head = temp;
    return;
  }
  reverse_linklist(head,temp->next,tail);
  temp->next->next = temp;
  temp->next = NULL;
  tail = temp;

}


int main(){

    Node* head = NULL;
    Node* tail = NULL;

    int value;
      while(1){
        cin >> value;
          if(value == -1){
        break;
         };

         insert_at_tail(head,tail,value);
    }
  
  


  
// print_reverse(head);
// display(head);
// delete_head(head);

// delete_any_position(head,2);
   
  //  sort(head);
  //  display(head); 
   reverse_linklist(head,head,tail);
   display(head);

}