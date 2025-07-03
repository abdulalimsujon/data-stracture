#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    while (n--) {
        string S, T;
        cin >> S >> T;

        auto it = S.begin();
        auto it1 = T.begin();


        while (it != S.end() && it1 != T.end()) {
            cout << *it << *it1;
            ++it;
            ++it1;
        }

 
        while (it != S.end()) {
            cout << *it;
            ++it;
        }

  
        while (it1 != T.end()) {
            cout << *it1;
            ++it1;
        }

        cout << endl;
    }

    return 0;
}
