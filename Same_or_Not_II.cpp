#include <bits/stdc++.h>
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
class myStack {
    Node* head = NULL;
    Node* tail = NULL;
         int sz = 0;
 public:
 void push(int val){
        sz++;
        Node* newNode = new Node(val);
        Node* temp = head;
        if(temp == NULL){
            head = newNode;
            tail = newNode;
            return;
        } 

           tail->next = newNode;
           newNode->prev = tail;
           tail = newNode;
    };

    void pop(){
        sz--;
        Node* deleteNode = tail;
        tail = tail->prev;
    
        delete deleteNode;

        if(tail==NULL){
            head = NULL;
            return;
        }

        tail->next = NULL;
    };

    int top(){
        
        return tail->val;

    };
    int size(){
        return sz;
    };
  bool empty(){
     return head == NULL;
  };


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
       newNode->prev = tail;
       tail = newNode;
    }

    void pop(){
        sz--;
        Node* deleteNode = head;
        head = head->next;
     
        delete deleteNode;
        if(head==NULL){
            tail = NULL;
            return;
        }
        head->prev = NULL;
    }

    int front(){
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

int main() {
    int N, M;
    myStack st;
    myQueue q;
    
    cin >> N >> M;


    while (N--) {
        int x;
        cin >> x;
        st.push(x);
    }


    while (M--) {
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;

    if (st.size() != q.size()) {
        flag = false;
    } else {
        while (!st.empty()) {
            if (st.top() != q.front()) {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
