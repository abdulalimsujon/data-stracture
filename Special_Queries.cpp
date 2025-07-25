#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    queue<string> q;

    cin >> n ;
    while(n--){
        int r;
        cin >> r ;
        if(q.empty() && r == 1){
            cout << "Invalid" << endl;
      
        }else{
           if(r==1){
              cout << q.front() << endl ;
            q.pop();
           
           }else if(r==0){
             string name;
              cin >> name  ;
              q.push(name);
            
           }

        }
    }

}