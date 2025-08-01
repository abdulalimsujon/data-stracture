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


int  height_of_node(Node* root) {
    if (root == NULL) {
        return 0;
    };

   int l =  height_of_node(root->left);
   int r=  height_of_node(root->right);

   return max(l,r)+1;
}

int  total_node(Node* root) {
    if (root == NULL) {
        return 0;
    };

   int l =  total_node(root->left);
   int r= total_node(root->right);

   return (l+r)+1;
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

int power(int base, int exponent) {
    int result = 1;
    for(int i = 0; i < exponent; i++) {
        result *= base;
    }
    return result;
}

int main() {

    Node* root = input_tree();
    int h =  height_of_node(root);
    int total = total_node(root);
 
    int result =  power(2,h);
       
    if((result-1)==total){
         cout << "YES" << " ";
    }else{
        cout << "NO" << " ";
    }

}
