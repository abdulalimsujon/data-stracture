#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    stack<int> st;
    queue<int> q;
    
    cin >> N >> M;


    while (N--) {
        int x;
        cin >> x;
        st.push(x);
    }


    while (M--) {
        int x;
        cin >> x;
        q.push(x);
    }

    bool flag = true;

    if (st.size() != q.size()) {
        flag = false;
    } else {
        while (!st.empty()) {
            if (st.top() != q.front()) {
                flag = false;
                break;
            }
            st.pop();
            q.pop();
        }
    }

    if (flag) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
