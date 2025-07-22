#include <bits/stdc++.h>

using namespace std;



int main()
{
    list<string>  history;
    string s;
    while(cin >> s && s!="end"){
        history.push_back(s);
    }

int q;

cin >> q;

cin.ignore();

auto current = history.begin();
while(q--){
    string input;
    getline(cin,input);
    stringstream ss(input);

    string cmd,address;

    ss>>cmd;

    if(cmd=="visit"){
        ss >> address;

        auto it = find(history.begin(),history.end(),address);

        if(it != history.end()){
           current = it;
           cout << *it << endl;
        }else{
            cout << "Not Available\n";
        }
    }else if(cmd=="next"){
            auto temp = current;
            temp++;
            if (temp != history.end()) {
                current++;
                cout << *current << '\n';
            } else {
                cout << "Not Available\n";
            }
    }else if(cmd=="prev"){
           if (current != history.begin()) {
                current--;
                cout << *current << '\n';
            } else {
                cout << "Not Available\n";
            }

    }
}


    return 0;
}
