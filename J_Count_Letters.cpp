#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

   
    int freq[26] = {0};

   
    for (char c : S) {
        freq[c - 'a']++;
    }

   
    for (int i = 0; i < 26; i++) {
        if (freq[i] > 0) {
            cout << char('a' + i) << " : " << freq[i] << "\n";
        }
    }

    return 0;
}
