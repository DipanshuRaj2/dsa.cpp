// #include<iostream>
// using namespace std;
// int removeDuplicates(int arr[], int n){
//     int i = 0;
//     for(int j = 1; j<n; j++){
//         if(arr[i]!=arr[j]){
//             i++;
//             arr[i]=arr[j];
//         }
//     }
//     return i+1;

// }
// int main(){
//     int arr[] = {1,2,2,3,4,4,5,6,6};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int k = removeDuplicates(arr , size);
//     for(int i = 0 ; i<k; i++){
//         cout << arr[i]<<" ";
//     }
//     return 0;
// }
//count the number of occurence
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v ={1,2,3,4,3,2,5,2,7,2};
//     int x;
//     cin >> x;
//     int count = 0;
//     for(int i = 0; i<v.size(); i++){
//         if(v[i] == x){
//             count++;
//         }
//     }
//     cout<<count;
// }

//find the last occurence;
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] ={1,2,1,4,5,1,4};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     int x ;
//     cin >> x;
//     int n = 0;
//     // for(int i = 0; i <size; i++){
//     //     if(arr[i] == x){
//     //         n = i;
//     //     }
//     // }
//     for(int i = size-1; i>=0; i--){
//         if(arr[i]==x){
//             n = i;
//             break;

//         }
//     }
//     cout <<"last occurence of the element: "<<n;

//    return 0;
// }
// count the number of elements strictly greater than value of x.
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] ={1,2,1,4,5,1,4};
//     int size = sizeof(arr)/sizeof(arr[0]);
//     int count = 0;
//     int x;
//     cin >> x;
//     for(int i = 0; i<size; i++){
//         if(arr[i]>x){
//             count++;
//         }

//     }
//     cout << count;
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[] ={1,2,3,3,4,5};
//     int size = sizeof(arr)/sizeof(arr[0]);

//     bool check = true;

//     for(int i = 1; i<size; i++){
//         if(arr[i]<arr[i-1]){
//             check = false;
//         }
//     }
//     cout << check;
//    return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int arr[] ={1,2,3,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 1; i<size; i=i+2){
        sum = sum + arr[i];
    }
    cout <<sum;
   return 0;
}