#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int largestElementIndex(vector<int>v){
    int ans  = INT_MIN;
    int index= -1;
    for(int i = 0; i<v.size(); i++){
        if(v[i]>ans){
            ans = v[i];
            index = i;
        }
    }
    return index;
}
using namespace std;
int main(){
    vector<int>v ={1,2,3,2,4,3,3,4,4};
    int largestIndex = largestElementIndex(v);
    // int largest = v[largestElementIndex];
    cout <<v[largestIndex]<<endl;
    int largestElement = v[largestIndex];
    for(int i = 0; i<v.size(); i++){
        if(v[i] == largestElement){
            v[i] =-1;
        }
    }
    // v[largest] = -1;
    int secondLargest = largestElementIndex(v);
    cout <<v[secondLargest];

    return 0;
}