#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    priority_queue<int, vector<int>, greater<int>> pq; 

    for (int i = 0; i < n; i++) {
        int v;
        cin >> v;
        pq.push(v);
    }

    int q;
    cin >> q;

    while (q--) {
        int command;
        cin >> command;

        if (command == 0) { 
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << "\n"; 
        } else if (command == 1) { 
            if (pq.empty())
                cout << "Empty\n";
            else
                cout << pq.top() << "\n";
        } else if (command == 2) { 
            if (!pq.empty()) pq.pop();
            if (pq.empty())
                cout << "Empty\n";
            else
                cout << pq.top() << "\n";
        }
    }

    return 0;
}
