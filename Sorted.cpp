#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        set <int> s;

        int size = n;  

        while (n--) {
            int v;
            cin >> v;
            s.insert(v);
        }
        
        for(int x : s){
            cout << x << " ";
        }
     
        cout << "\n";
    }

    return 0;
}
