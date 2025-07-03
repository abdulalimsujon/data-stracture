#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s) ;
   
    stringstream ss(s);

    string assign ;
     ss >> assign;
    reverse(assign.begin(),assign.end());
    cout << assign ;
    while(ss>>assign){
        reverse(assign.begin(),assign.end());
        cout << " " << assign;
    }

}