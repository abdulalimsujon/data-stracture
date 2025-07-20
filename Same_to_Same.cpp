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
        head = tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
}

int main() {
    Node* head1 = NULL;
    Node* tail1 = NULL;
    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val;

  
    while (cin >> val && val != -1) {
        insert_at_tail(head1, tail1, val);
    }


    while (cin >> val && val != -1) {
        insert_at_tail(head2, tail2, val);
    }

    Node* temp1 = head1;
    Node* temp2 = head2;
    bool flag = true;

    while (temp1 != NULL && temp2 != NULL) {
        if (temp1->value != temp2->value) {
            flag = false;
            break;
        }
        temp1 = temp1->next;
        temp2 = temp2->next;
    }

    if (temp1 != NULL || temp2 != NULL) {
        flag = false;
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
