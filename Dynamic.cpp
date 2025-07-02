#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin >> arr[i];
    }

    int max = INT_MIN;

 for(int i=0;i<N;i++){
       if(arr[i]>max){

        max = arr[i];

       }
    }

    cout << max;
    return 0;
}

