#include<bits/stdc++.h>
using namespace std;
int main(){

    list<int> l(3);
    // vector<int> v = {1,2,3};
    int arr[] = {1,2,3};

    // list<int> l2(v.begin(),v.end());
      list<int> l2(arr,arr+3);
    for(int val : l2){
     cout << val << " ";
    };
};
