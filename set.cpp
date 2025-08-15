#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    set<int> s;
    // set hocche BST ar STL

    while(n--){
        int p;
        cin >> p;
        s.insert(p);
    }

    for(auto it= s.begin(); it != s.end();it++){
        cout << *it << endl;
    }
}