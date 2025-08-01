#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void get_level_node(Node* root, int n) {
    if (root == NULL) return;

    queue<pair<Node*, int>> q;
    q.push({root, 0}); // level starts from 1

    while (!q.empty()) {
        pair<Node*, int> p = q.front();
        q.pop();

        Node* current = p.first;
        int level = p.second;

        if (level == n) {
            cout << current->val << " ";
        }

        if (current->left) {
            q.push({current->left, level + 1});
        }
        if (current->right) {
            q.push({current->right, level + 1});
        }
    }
}

int height_of_node(Node* root) {
    if (root == NULL) {
        return 0;
    }
    int l = height_of_node(root->left);
    int r = height_of_node(root->right);
    return max(l, r) + 1;
}

Node* input_tree() {
    queue<Node*> q;
    int n;
    cin >> n;
    Node* root;

    if (n == -1) root = NULL;
    else root = new Node(n);

    if (root != NULL) q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myLeft = (l == -1) ? NULL : new Node(l);
        Node* myRight = (r == -1) ? NULL : new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left) q.push(p->left);
        if (p->right) q.push(p->right);
    }

    return root;
}

int main() {
    Node* root = input_tree();

    int n;
    cin >> n;

    int h = height_of_node(root);
    if (n >= h) {
        cout << "Invalid" << endl;
    } else {
        get_level_node(root, n);
    }

    return 0;
}
