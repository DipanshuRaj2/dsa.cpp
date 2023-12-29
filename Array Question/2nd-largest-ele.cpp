// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v = {12, 23, 4, 5, 7, 61, 23};
//     int n = v[0];
//     int index = -1;
//     for(int i = 1; i<v.size(); i++){
//         if(v[i]> n){
//             n = v[i];
//             index = i;
//         }
//     }
//     cout <<"First Largest Element "<< n<<" and the index are: "<<index<< endl;

//     v[index]= -1; 
    

//    cout<< v[index]<<endl;

//    n = v[0]; //Reset n to the first element;

//     for(int i = 0; i<v.size(); i++){
//         cout << v[i]<<" ";
//     }
//     cout <<endl;

//     for(int i = 0; i<v.size(); i++){
//         if(v[i]>n){
//             n = v[i];
//             index = i;
//         }
//     }
//     cout <<"second Largest Element "<< n<<" and the index are: "<<index<< endl;

//     return 0;
// }



//using function to find the dupicate element:

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int largestElementIndex(vector<int>v){
    int n = v.size();
    int max = INT_MIN;
    int index = 0;
    for(int i = 0; i<n; i++){
        if(v[i] > max){
            max = v[i];
            index = i;
        }
    }
    return index;
}
int main(){
    vector<int>v = {12, 23, 4, 5, 7, 61, 23};
    int indexOfLargest = largestElementIndex(v);
    cout <<"First largest element: "<<v[indexOfLargest]<<endl;
    
    v[indexOfLargest] = -1;

    int indexOfSecondLargest = largestElementIndex(v);
    cout <<"Second largest element: "<<v[indexOfSecondLargest];

    
    return 0;
}