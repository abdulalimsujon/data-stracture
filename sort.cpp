#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;
    int cl;
    char sec;
    int roll;
    int math;
    int eng;

    int total() const {
        return math + eng;
    }
};

bool cmp(const Student &a, const Student &b) {
    if (a.total() != b.total()) {
        return a.total() > b.total();  
    } else {
        return a.roll < b.roll;  
    }
}

int main() {
    int N;
    cin >> N;

    Student st[N];

    for (int i = 0; i < N; i++) {
        cin >> st[i].nm >> st[i].cl >> st[i].sec >> st[i].roll >> st[i].math >> st[i].eng;
    }

    sort(st, st + N, cmp);

    for (int i = 0; i < N; i++) {
        cout << st[i].nm << " " << st[i].cl << " " << st[i].sec << " " << st[i].roll << " " << st[i].math << " " << st[i].eng << endl;
    }

    return 0;
}
