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
int count_node(Node* root){
     if(root==NULL){
        return 0;
     }
     int l = count_node(root->left);
     int r = count_node(root->right);

     return l+r+1;
}

int count_leaf_node(Node* root){
     if(root==NULL){
        return 0;
     }

     if(root->left == NULL && root->right== NULL){
        return 1;
     }
     int l = count_node(root->left);
     int r = count_node(root->right);

     return l+r;
}

Node* input_tree(){
    queue<Node*> q;
    int n;
    cin >> n ;
    Node* root ;
    if(n == -1) root  = NULL;
     else  root = new Node(n);
   if(root != NULL) q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        Node* myLeft, *myRight;

        int l,r;

        cin >> l >> r;

        if(l == -1) myLeft = NULL ;
        else myLeft = new Node(l) ;

        if(r == -1 ) myRight = NULL;
        else myRight = new Node(r) ;
       
        p->left = myLeft;
        p->right =  myRight;

        if(p->left){
            q.push(p->left);
        }
        if(p->right) q.push(p->right);
        
    }

    return root;
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
