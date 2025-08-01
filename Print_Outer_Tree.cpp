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


 void outerLeft(Node* root) {
    if (root == NULL) {
        return;
    };
     if(root->left == NULL){
        outerLeft(root->right);
     }else{
   outerLeft(root->left);
     }
 
    cout << root->val << " ";
  
   }

  void  outerRight(Node* root) {
    if (root == NULL) {
        return ;
    };
     
     cout << root->val << " ";
     if(root->right == NULL){
            outerRight(root->left); 
     }
     outerRight(root->right);
   
  
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
     outerLeft(root->left);
     cout << root->val << " ";
     outerRight(root->right);

}
