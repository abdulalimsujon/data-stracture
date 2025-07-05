#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    while (T--) {
        string line, S, X;
        getline(cin, line);

 
        stringstream ss(line);
        ss >> S >> X;

        string result;
        int i = 0;
        while (i < S.size()) {
            if (S.substr(i, X.size()) == X) {
                result += "#";
                i += X.size();
            } else {
                result += S[i];
                i++;
            }
        }

        cout << result << endl;
    }

    return 0;
}
