#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int get_size(Node* head) {
    int count = 0;
    Node* temp = head;
    while (temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count;
}

void print_forward(Node* head) {
    cout << "L -> ";
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        if (temp->next == NULL) break;
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* tail) {
    cout << "R -> ";
    Node* temp = tail;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

void insert_at_index(Node* &head, Node* &tail, int idx, int val) {
    int list_size = get_size(head);

    if (idx < 0 || idx > list_size) {
        cout << "Invalid" << endl;
        return;
    }

    Node* newNode = new Node(val);

    if (idx == 0) {
        if (head == NULL) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    } else if (idx == list_size) {
        newNode->prev = tail;
        if (tail != NULL) {
            tail->next = newNode;
        } else {
            head = newNode;
        }
        tail = newNode;
    } else {
        Node* temp = head;
        for (int i = 0; i < idx - 1; i++) {
            temp = temp->next;
        }
       
      
    newNode->next =  temp->next;
    temp->next->prev = newNode;

    newNode->prev = temp;
    temp->next = newNode;



    }

    print_forward(head);
    print_backward(tail);
}

int main() {
    int Q;
    cin >> Q;

    Node* head = NULL;
    Node* tail = NULL;

    while (Q--) {
        int x, v;
        cin >> x >> v;
        insert_at_index(head, tail, x, v);
    }

    return 0;
}
