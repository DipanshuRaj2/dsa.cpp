#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int getSecondOrderElements(int n, vector<int> v) {
    // Write your code here.
    int max =INT_MIN;
    int min  =INT_MIN;
    int maxIndex = -1;
    int minIndex = -1;
    for(int i = 0; i<n; i++){
        if(v[i]>max){
            maxIndex =i;
        }
        if(v[i]<min){
            minIndex = v[i];
        }
    }
    v[maxIndex] ,v[minIndex] = -1;
    max = INT_MIN;
    min = INT_MAX;
    for(int i = 0; i<n; i++){
        if(v[i]>max){
            max = v[i];
        }
        if(v[i]<min){
            min = v[i];
        }
    }
    return {max,min} ;
}
int main(){
    vector<int>v={12, 23, 4, 5, 7, 61, 23};
    int n = v.size();
    cout<< getSecondOrderElements(n , v);
    return 0;
}
//hello hi