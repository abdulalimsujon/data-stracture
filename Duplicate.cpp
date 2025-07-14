#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    bool found = false;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1]) {
            found = true;
            break;
        }
    }

    if (found)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}
