#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string nm;      
    int cl;          
    char sec;        
    long long roll; 
    int math;        
    int eng;      
};

bool cmp(const Student &a, const Student &b) {
    if (a.eng != b.eng) {
        return a.eng > b.eng; 
    } else if (a.math != b.math) {
        return a.math > b.math; 
    } else {
        return a.roll < b.roll;
    }
}

int main()
{
    int n;
    cin >> n;

    Student st[n]; 

    for (int i = 0; i < n; i++) {
        cin >> st[i].nm >> st[i].cl >> st[i].sec
            >> st[i].roll >> st[i].math >> st[i].eng;
    }

    sort(st, st + n, cmp);

    for (int i = 0; i < n; i++) {
        cout << st[i].nm << " " << st[i].cl << " "
             << st[i].sec << " " << st[i].roll << " "
             << st[i].math << " " << st[i].eng << endl;
    }

    return 0;
}
