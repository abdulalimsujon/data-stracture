#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    
    Node(int val) {
        this->val = val;
        this->next = NULL; 
    }
};

class myQueue {
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
       Node* newNode = new Node(val);
       if(head==NULL){
        head = newNode;
        tail = newNode;
        return;
    }
       tail->next = newNode;
       tail = newNode;
    }

    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        if(head==NULL){
            tail = NULL;
        }
    }

    int font(){
        return  head->val;
    }
    int back(){
        return tail->val;
    }

    int size(){
        return sz;
    }

    bool empty(){
        return head == NULL;
    }
};

int main(){
    myQueue q;
    int n;
    cin >> n;
    for(int i =0 ;i<n;i++){
        int x;
        cin >> x;
        q.push(x);
    }
    
       while(!q.empty()){
        cout << q.font() << endl;
        q.pop();
    }

    

}