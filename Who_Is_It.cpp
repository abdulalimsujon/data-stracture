#include <bits/stdc++.h>
using namespace std;

class Who {
public:
    int ID;
    string name;
    char section;
    int total;

    Who(int id, string n, char sec, int t) {
        ID = id;
        name = n;
        section = sec;
        total = t;
    }

    void print() {
        cout << ID << " " << name << " " << section << " " << total << endl;
    }
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        int id1, id2, id3, m1, m2, m3;
        string n1, n2, n3;
        char s1, s2, s3;

        cin >> id1 >> n1 >> s1 >> m1;
        cin >> id2 >> n2 >> s2 >> m2;
        cin >> id3 >> n3 >> s3 >> m3;

        Who student1(id1, n1, s1, m1);
        Who student2(id2, n2, s2, m2);
        Who student3(id3, n3, s3, m3);

        Who best = student1;

        if (student2.total > best.total || (student2.total == best.total && student2.ID < best.ID)) {
            best = student2;
        }

        if (student3.total > best.total || (student3.total == best.total && student3.ID < best.ID)) {
            best = student3;
        }

        best.print();
    }

    return 0;
}
