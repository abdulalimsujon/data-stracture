#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
     
    cin >> t;
    while(t--){
        int a,b,c,t1,t2;
        cin >> a >> b >> c;

        t1 = a-1;
        t2 = abs(b-c) +  c-1;

        if(t1>t2){
            cout << 2 << endl;
        }else if(t1<t2){
            cout << 1 << endl;
        }else{
            cout << 3 << endl;
        }
    }

}