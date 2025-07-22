#include <bits/stdc++.h>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    list<int> myList;  

    while (Q--) {
        int X, V;
        cin >> X >> V;

        if (X == 0) {
            myList.push_front(V);  
        } else if (X == 1) {
            myList.push_back(V);  
        } else if (X == 2) {
            if (V < myList.size()) {
                auto it = myList.begin();
                for (int i = 0; i < V; i++) {
                    it++;
                }
                myList.erase(it); 
            }
        }

        
        cout << "L -> ";
        for (int val : myList) {
            cout << val << " ";
        }
        cout << endl;

        cout << "R -> ";
        for (auto rit = myList.rbegin(); rit != myList.rend(); rit++) {
            cout << *rit << " ";
        }
        cout << endl;
    }

    return 0;
}
