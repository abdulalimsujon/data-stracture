#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    vector<long long int> pre(n);

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
     
    pre[0] = arr[0];
     for(int i=1;i<n;i++){
         pre[i] = pre[i-1] + arr[i];
    }

     for(int i=n-1;i>=0;i--){
       cout << pre[i] << " ";
    }


    return 0;
}
