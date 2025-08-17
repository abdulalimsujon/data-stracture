#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int x, y;
        cin >> x >> y;

        int srn = y / 2; 
        int empty = srn * 7;
        if(y%2==1){
            srn++;
            empty += 11;
        } 
        if(x > empty){
           x -= empty;
           srn += (x/15);

           if(x % 15 !=0){
            srn++;
           }
        }

     
        cout << srn << endl;
    }
    return 0;
}
