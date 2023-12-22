#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] ={12,32,10,34,6,4,36};
    int size=sizeof(arr)/sizeof(arr[0]);
    int x =90;
    int ans =34;
    for(int i = 0; i<size; i++){
        if(arr[i]==x)
            ans = i;
            break;

    }
    cout <<"Ans "<<ans;

}