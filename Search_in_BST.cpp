#include<bits/stdc++.h>
using namespace std;

class Node {
    public: 
      int val;
      Node *left ;
      Node *right;

      Node(int val){
        this->val = val;
        this->left= NULL;
        this->right =NULL;
      }
};

Node* input_tree(){
    int val;
    cin >> val;
    Node* root ;
    if(val== -1) root = NULL;
    else root = new Node(val);
    queue<Node*> q;
    if(root) q.push(root);

    while(!q.empty()){
        Node* p = q.front();
        q.pop();
        Node* leftNode ,*rightNode;
        int l,r;
        cin >> l >> r;
        if(l==-1) leftNode= NULL;
        else leftNode = new Node(l);

        if(r==-1) rightNode = NULL;
        else rightNode = new Node(r);

        p->left = leftNode;
        p->right = rightNode;

        if(p->left) q.push(leftNode);
        if(p->right) q.push(rightNode);
    }

    return root;
}

//search function

bool search(Node* root,int v){

    if(root == NULL) return false;
    if(root->val == v) return true;

    if(root->val > v){
       return   search(root->left,v);
       
    }else{
     return   search(root->right,v);
       
    }

};

//insert function

void insert(Node* &root,int v){
    if(root == NULL) root = new Node(v);

    if(root->val > v ){
        if(root->left == NULL){
           root->left = new Node(v);   
        }else{
            insert(root->left,v);
        }
    }else{

            if(root->right == NULL){
           root->right = new Node(v);   
        }else{
            insert(root->right,v);

        }

    }
}

// array to BST 

Node* convert(int a[],int n,int l,int r){
    while(l>r) return NULL;

    int mid = (l + r)/2;
    Node* root = new Node(a[mid]);
    Node* leftRoot = convert(a,n,l,mid-1);
    Node* rightRoot = convert(a,n,mid+1,r);

    root->left = leftRoot;
    root->right = rightRoot;

    return root;

}


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
int main(){

    // Node* root = input_tree();

 

    int n;

    cin >> n;

    int array[n];

    for(int i = 0 ;i < n;i++){
       cin >> array[i];
    }

  Node* root =   convert(array,n,0,n-1);
    // insert(root,val);
       levelOrder(root);
  
}