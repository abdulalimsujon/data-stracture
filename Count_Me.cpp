#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        stringstream ss(s);
        string word;
        map<string, int> freq;

        string ans;
        int max = 0;

        while (ss >> word) {
            freq[word]++;
            if (freq[word] > max) {
                max= freq[word];
                ans = word;
            }
        }

        cout << ans << " " << max << "\n";
    }

    return 0;
}
