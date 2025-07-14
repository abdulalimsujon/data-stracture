#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;
        int A[1001]; 

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        int flag = 1;
        for (int i = 1; i < N; i++) {
            if (A[i] < A[i - 1]) {
                flag = 0;
                break;
            }
        }

        if (flag)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
