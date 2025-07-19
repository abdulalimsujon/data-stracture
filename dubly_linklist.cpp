#include<bits/stdc++.h>
using namespace std;
class Node {
    public:
       int val;
       Node* next;
       Node* prev;


       Node(int val){
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
       }
};

void print_forward(Node* head){

    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
    
        temp = temp->next;
    };

};
void print_backward(Node* tail){

    Node* temp = tail;
    while(temp != NULL){
        cout << temp->val << " ";
    
        temp = temp->prev;
    };

};

void insert_at_head(Node* &head,int val){

    Node* newNode = new Node(val);
    newNode->next =  head;
    head->prev = newNode;

    head = newNode;
}

void insert_at_tail(Node* &head,Node* &tail,int val){
     
    
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }
    newNode->prev =  tail;
    tail->next = newNode;

    tail = newNode;
}



void insert_at_any_position(Node* &head,int idx,int val){
  
    Node* temp = head;

    for(int i = 1; i < idx ; i++ ){
        temp = temp->next;
    }
    
    Node* newNode = new Node(val);
   
    newNode->next =  temp->next;
    temp->next->prev = newNode;

    newNode->prev = temp;
    temp->next = newNode;
    
}

void delete_head(Node* &head,Node* tail){
   
    Node* deleteNode = head;
   head = head->next;
   delete deleteNode;
   if(head == NULL){
    tail = NULL;
    return;
   }
   head->prev = NULL;

};


void delete_tail(Node* &head,Node* tail){
   
    Node* deleteNode = tail;
   tail = tail->prev;
   delete deleteNode;
   if(tail == NULL){
    head = NULL;
    return;
   }
   tail->next = NULL;

};

void delete_any_position(Node* &head,int idx){
   
    Node* temp = head;
    for(int i=1;i<idx;i++){
        temp = temp->next;
    }
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;
    delete deleteNode;

};



int main(){

    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev= head;

    a->next= tail;
    tail->prev = a;


    // print_forward(head);
    // print_backward(tail);
    //  insert_at_head(head,100);
        //  print_forward(head);
        //  insert_at_tail(head,tail,500);
        //  insert_at_any_position(head,2,550);
        //   delete_head(head,tail);
        // delete_tail(head,tail);
        delete_any_position(head,1);
           print_forward(head);
    return 0;

}