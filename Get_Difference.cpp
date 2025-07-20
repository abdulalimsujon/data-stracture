#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int value) {
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while (cin >> val && val != -1) {
        insert_at_tail(head, tail, val);
    }

    int min = head->value;
    int max = head->value;

    Node* temp = head;
    while (temp != NULL) {
        if (temp->value < min){
            min = temp->value;
        } 
        if (temp->value > max) {
             max = temp->value;
        } 
        temp = temp->next;
    }
    int diff = max - min;
    
    cout << diff << endl;
    

    return 0;
}
