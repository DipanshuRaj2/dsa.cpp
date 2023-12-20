// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string name;
//     cin >> name;
//     transform(name.begin(),name.end(),name.begin(),::tolower);
//     cout << name;
//     return 0;
// }

//Questions you have given a string convert the string in the uppercase
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     string name;
//     getline(cin ,name);
//     transform(name.begin(),name.end(),name.begin(),::toupper);
//     cout << name;

// }

//sum of the array 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    // int arr[]={10, 30, 45, 1, 2,3};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // int sum = 0;
    // for(int i = 0; i<size; i++){
    //     sum = sum+arr[i];
    // }
    // cout << sum;

    //maxmimum element in the array;
    //bruteforce approach
    // int arr[]={10, 30, 45, 1, 2,3};
    // int size = sizeof(arr)/sizeof(arr[0]);
    // sort(arr ,arr+size);
    // for(int i = 0; i<size; i++){
    //     cout << arr[i]<<" ";
    // }
    // cout <<endl;
    // cout << arr[size-1];
   
    //efficent solution 

    int arr[]={10, 30, 45, 1, 2,46};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    int max = arr[0];
    for(int i=1; i<size;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    cout << "max "<<max;
    



    
   
}