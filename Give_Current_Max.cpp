#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    Student(string name,int roll,int marks){
        this->name =  name;
        this->marks = marks;
        this->roll = roll;
    }
};

class cmp {
public:
    bool operator ()(const Student l, const Student r){
        if(l.marks == r.marks) return l.roll > r.roll; 
        return l.marks < r.marks;
    }
};

int main() {
    int n;
    cin >> n;

    priority_queue<Student, vector<Student>, cmp> pq; 

    for (int i = 0; i < n; i++) {
        string name;
        int roll, marks;
        cin >> name >> roll >> marks;
        pq.push(Student(name, roll, marks));
    }

    int q;
    cin >> q;

    while (q--) {
        int command;
        cin >> command;

        if (command == 0) { 
            string name;
            int roll, marks;
            cin >> name >> roll >> marks;
            pq.push(Student(name, roll, marks));
            Student s = pq.top();
            cout << s.name << " " << s.roll << " " << s.marks << "\n";
        } else if (command == 1) { 
            if (pq.empty()) {
                cout << "Empty\n";
            } else {
                Student s = pq.top();
                cout << s.name << " " << s.roll << " " << s.marks << "\n";
            }
        } else if (command == 2) { 
            if (!pq.empty()) pq.pop();
            if (pq.empty()) {
                cout << "Empty\n";
            } else {
                Student s = pq.top();
                cout << s.name << " " << s.roll << " " << s.marks << "\n";
            }
        }
    }

    return 0;
}
