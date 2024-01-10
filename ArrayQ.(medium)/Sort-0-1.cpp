#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

void sorting0_1(vector<int> &v){
    int count = 0;

    for(int i = 0; i<v.size(); i++){
        if(v[i] ==0){
            count++;
        }
    }
    // cout << count<<endl;
    for(int i = 0; i<v.size();i++){
        if(i < count){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
}

int main(){
    int n;
    cin >> n;
    vector<int>v;
    for(int i =0; i<n; i++){
        int element; 
        cin >> element;
        v.push_back(element);
    }
    sorting0_1(v);
    for(int i = 0; i<n; i++){
        cout << v[i]<<" ";
    }
    
}
