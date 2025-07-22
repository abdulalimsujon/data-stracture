#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l;
    int val;
    int count = 0;
    int max = 1000;

    while (cin >> val && val != -1) {
        if (val < 0 || val > 1000) {
         
            continue;
        }

        l.push_back(val);
        count++;

        if (count == max) break;
    }
      l.sort();
    l.unique();     
  

    for (int v : l) {
        cout << v << " ";
    }

    return 0;
}
