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


void sumWithoutLeaf(Node* root, int &sum) {
    if (root == NULL) return;


    if (!(root->left == NULL && root->right == NULL)) {
        sum += root->val;
    }

    sumWithoutLeaf(root->left, sum);
    sumWithoutLeaf(root->right, sum);
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
    int sum = 0;
    Node* root = input_tree();
    sumWithoutLeaf(root, sum);
    cout << sum << endl;
    return 0;
}
