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

void display(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}

int size(Node* head) {
    int cnt = 0;
    Node* temp = head;
    while (temp != NULL) {
        temp = temp->next;
        cnt++;
    }
    return cnt;
}

void delete_head(Node*& head, Node*& tail) {
    if (head == NULL){
       return;
    } 
    Node* deleteNode = head;
    head = head->next;
    if (head == NULL) tail = NULL;
    delete deleteNode;
}

void insert_at_head(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head = tail = newNode;
        return;
    }
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node*& head, Node*& tail, int value) {
    Node* newNode = new Node(value);
    if (head == NULL) {
        head =  newNode;
        tail =  newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void delete_at_index(Node*& head, Node*& tail, int idx) {

    if (idx == 0) {
        delete_head(head, tail);
        return;
    }

    Node* temp = head;
    for (int i = 1; i < idx; i++) {
       
        temp = temp->next;
    }

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;

    if (temp->next == NULL) {
        tail = temp;
    }

    delete deleteNode;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int t;
    cin >> t;

    while (t--) {
        int query, val;
        cin >> query >> val;

        if (query == 0) {
            insert_at_head(head, tail, val);
            display(head);
        } else if (query == 1) {
            insert_at_tail(head, tail, val);
            display(head);
        } else if (query == 2) {
            int sz = size(head);
            if (val >= sz) {
                display(head);
                continue;
            }
            delete_at_index(head, tail, val);
            display(head);
        }
    }

    return 0;
}
