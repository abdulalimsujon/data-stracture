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


int main(){
    Node* head = new Node(0);
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node*  c = new Node(30);
    Node* d = new Node(40);
    
    head->next = a;
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=head;

    Node* hare = head;
    Node* tortoase = head;
    bool flag = false;
    while(hare != NULL && hare->next != NULL){
        
        hare = hare->next->next;
        tortoase = tortoase->next;
        if(tortoase == hare){
         flag = true;
          break;
      }
    }
  
if(flag== true){
    cout << "cycle detected";
}else{
    cout << "no cycle";
}


}