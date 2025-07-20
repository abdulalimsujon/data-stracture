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
    int T;
    cin >> T;

    while (T--) {
        Node* head = NULL;
        Node* tail = NULL;

        int val;
        while (cin >> val && val != -1) {
            insert_at_tail(head, tail, val);
        }

        int x;
        cin >> x;

        Node* temp = head;
        int index = 0;
        bool found = false;

        while (temp != NULL) {
            if (temp->value == x) {
                found = true;
                break;
            }
            index++;
            temp = temp->next;
        }

        if (found) {
            cout << index << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
