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

// Preorder traversal: root -> left -> right
void preorder(Node* root) {
    if (root == NULL) return;

    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
};

//level order 

void levelOrder(Node* root){

    queue<Node*> q;
    
    q.push(root);

    while(!q.empty()){
        
    Node* f = q.front();
    q.pop();
   
    cout << f->val << " ";

    if(f->left != NULL){
        q.push(f->left);
    };
    if(f->right != NULL){
        q.push(f->right);
    };
    }

};

int main() {
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);

    root->left = a;
    root->right = b;
    a->left = c;
    b->left = d;
    b->right = e;
// preorder(root);
    levelOrder(root);
    

    return 0;
}
