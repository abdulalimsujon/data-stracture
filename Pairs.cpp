#include <bits/stdc++.h>
using namespace std;


class cmp {
    public:
    bool operator()( pair<string,int> &l, pair<string,int> &r){
    if (l.first == r.first)
            return l.second < r.second; 
        return l.first > r.first;  
        
    }
};


int main() {
   
    priority_queue<pair<string,int>,vector<pair<string,int>>,cmp> pq;
    int n;
    cin >> n;
    while(n--){
       int num;
       string name;
       cin >> name >> num;
       pq.push({name,num});
    }

       while (!pq.empty()) {
        auto p = pq.top();
        cout << p.first << " " << p.second << "\n";
        pq.pop();
    }


    return 0;
}
