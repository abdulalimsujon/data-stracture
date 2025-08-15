#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mp;
    mp["abdul"] = 7;
    mp["alim"] = 7;
    mp["sujon"] = 2;
    for(auto it = mp.begin(); it != mp.end();it++){
        cout << it->first << it->second << endl;
    }

    // cout << mp["fd"];
    if(mp.count("alim")){
        cout << "ache";
    }else{
        cout << "nai";
    }
}