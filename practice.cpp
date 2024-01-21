// #include<iostream>
// #include<vector>
// using namespace std;
// int secondLargestElement(vector<int>&v){
//     int max = v[0];
//     int max2 = v[0];
//     int index = 0;
//     for(int i = 1; i<v.size(); i++){
//         if(v[i] > max){
//             max = v[i];
//             index = i;
//         }
//     } 
//     for(int i = 0; i<v.size(); i++){
//         if(v[i] > max2 && v[i]!= max){
//             max2 = v[i];
//         }
//     }

    

//     return max2;
// }
// int main(){
//     vector<int>v ={10,12,23,23,4,5,7};
    

//     cout<<"second largest element : "<<secondLargestElement(v); 




// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr1[] = {1,2,3,4,5};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);

//     int arr2[] = {6,7,8,9,10};
//     int n2 = sizeof(arr1)/sizeof(arr1[0]);
     
//     int n3 = n1 +n2;
//     int arr3[n3];
//     int j = 0;

//     for(int i = 0; i<n1; i++){
//         arr3[j++] = arr1[i];
//     }
//     for(int i = 0; i<n2; i++){
//         arr3[j++] = arr2[i];
//     }

//     for(int i = 0; i<n3; i++){
//         cout<<arr3[i]<<" ";
//     }

//    return 0;
// }

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5};
    int n = v.size();

    int k = 2;
    k = k % n; // rotate
    
    int j = 0; 
    vector<int>ansArray(n); 

    for(int i = n-k; i<n; i++){
        ansArray[j++] = v[i];
    }
    for(int i = 0; i<=k; i++){
        ansArray[j++] = v[i];
    }
    for(int j = 0; j<n; j++){
        cout<<ansArray[j]<<" ";
    }
    
}