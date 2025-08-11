#include<bits/stdc++.h>
using namespace std;


void insert_in_heap(vector<int> v,int val){
 
    v.push_back(val);

    int curr_idx  = v.size() - 1;
    int par_idx = (curr_idx -1)/2;
    cout << v[curr_idx];
    while(curr_idx !=0){
        if(v[par_idx] < v[curr_idx] ){
            swap(v[par_idx],v[curr_idx] );
        }else{
            break;
        }

        curr_idx =  par_idx;
    }
}

void delete_from_heap(vector<int> v,int val){

    

}
int main(){
    int n;
    cin >> n;
    vector<int> v(n);

     for(int i=0;i<n;i++){
         int val;
           cin >> val ;
        insert_in_heap(v,val);
    }

   
  

    for(int x:v){
        cout << " " <<  x << " ";
    }
    cout << endl;
    return 0;

}