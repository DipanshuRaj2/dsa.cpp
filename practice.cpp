#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   
    cout <<"Enter the size of m and n "<<endl;
    int m, n;
    cin>>m >> n;
    vector<int>v1(m);
    vector<int>v2(n);
    set<int>s1;
    set<int>s2;

    cout <<"Enter the Elements in the v1 "<<endl;
    for(int i = 0; i<m; i++){
        cin >> v1[i];
        s1.insert(v1[i]);
    }
    cout << endl<<endl;
    
    cout <<"Enter the Elements in the v2 "<<endl;
    for(int i = 0;  i<n; i++){
        cin >> v2[i];
        s2.insert(v2[i]);
    }

    for(auto ele: s1){
        cout << ele<<" ";
    }
        for(auto ele: s2){
        cout << ele<<" ";
    }
    cout <<endl<<endl;
    



}