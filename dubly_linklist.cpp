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

void insert_at_tail(Node* &tail,int val){

    Node* newNode = new Node(val);
    newNode->prev =  tail;
    tail->next = newNode;

    tail = newNode;
}


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
     insert_at_head(head,100);
        //  print_forward(head);
         insert_at_tail(tail,500);
           print_forward(head);
    return 0;

}