#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={12,32,10,34,6,4,36};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    swap(arr[i] , arr[size-1]);
    for(i = 0; i<size; i++){
        cout << arr[i]<<" ";
    }
    

}