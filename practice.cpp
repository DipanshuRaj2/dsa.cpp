#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v ={1,2,3,2,1,3,3,4};
    sort(v.begin(),v.end());
    int unique = 0;
    for(int i = 0; i<v.size(); i++){
        if(v[i] != v[i+1]){
            unique = v[i];
        }
    }
    cout << unique ;
    return 0;
}