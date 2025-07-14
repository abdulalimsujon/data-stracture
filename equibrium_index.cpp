#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    // Manually calculate total sum
    long long total = 0;
    for (int i = 0; i < n; i++) {
        total += v[i];
    }

    long long leftSum = 0;

    for (int i = 0; i < n; i++) {
        long long rightSum = total - leftSum - v[i];
        if (leftSum == rightSum) {
            cout << i << endl; 
            return 0;
        }
        leftSum += v[i];
    }

    cout << -1 << endl; 
    return 0;
}
