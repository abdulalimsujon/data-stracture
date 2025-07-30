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

//level order 

void levelOrder(Node* root){
    
    if(root == NULL){
      cout << "No tree sir";
      return;
    } 
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
}

// max height to the tree

int max_height(Node* root){

    if(root == NULL){
        return 0;
    }

    if(root->left == NULL && root->right==NULL){
        return 0;
    }
    int left = max_height(root->left);
    int right = max_height(root->right);

    return max(left,right)+1;
}

int main(){
    
  Node* root =  input_tree();
    // levelOrder(root);

   int count =  max_height(root);
  
   cout << count ;
    return 0;
}