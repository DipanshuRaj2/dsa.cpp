
// // matrix multiplication
// #include<iostream>
// using namespace std;
// int main()
// {

//     cout << "row1 : ";
//     int row1 ;
//     cin >>row1;

//     cout<<"col1 : ";
//     int col1;
//     cin >>col1;

//     int M1[row1][col1];
//     for(int i = 0; i<row1; i++){
//         for(int j = 0; j<col1;j++){
//             cout<<"Enter the Element in the M1[" <<i<<"]"<<"["<<j<<"] : ";
//             cin >> M1[i][j];
//         }
//     }
//     cout << "row2 : ";
//     int row2 ;
//     cin >>row2;

//     cout<<"col2 : ";
//     int col2;
//     cin >>col2;

//     int M2[row2][col2];
//     for(int i = 0; i<row2; i++){
//         for(int j = 0; j<col2;j++){
//             cout<<"Enter the Element in the M2[" <<i<<"]"<<"["<<j<<"] : ";
//             cin >> M2[i][j];
//         }
//     }

//     if(col1!=row2){
//         cout<<"matrix multiplication is not possible : ";
//     }
//     else {
//     int ans [row1][col2];
//     for(int i = 0; i<row1; i++){
//         for(int j = 0; j<col2;j++){
//             ans[i][j]= 0;
//             for(int k = 0; k<3;k++){
//                 ans[i][j]+=M1[i][k] * M2[k][j];
//             }
//         }
//     }
//     for(int i = 0; i<row1;i++){
//         for(int j = 0; j<col2; j++){
//                 cout<<ans[i][j]<<" ";
//             }
//             cout<<endl;
//         }
//     }
//    return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int uniqueElement(vector<int>v){
//     int n = v.size();
//     sort(v.begin(),v.end());
//     int ans = 0;
//     for(int i = 0; i<n; i++){
//         if(v[i]!=v[i+1]){
//             ans = v[i];

//         }
//     }
//     return ans;
// }
// int main()
// {
//    vector<int> v= {2,3,4,1,4,2,3};
//    int a = uniqueElement(v);
//    cout<<"unique element "<<a;

//    return 0;
// }
// #include <bits/stdc++.h>
// #include <vector>
// using namespace std;
// class Solution
// {
// public:
//     bool uniqueOccurrences(vector<int> &arr)
//     {
//         int cnt =  0;
//         int n = arr.size();
//         map<int, int>mp ;
//         for (int i = 0; i < n; i++)
//         {
//             mp[arr[i]]++;
//         }


//         set<int>occur ;
        
//         for (auto &it : mp)
//         {
//             if(occur.count(it.second) > 0){
//                 return false ;
//             }
//             occur.insert(it.second);
//         }
//         return true ;
//     }
// };
// int main()
// {
//     vector<int> v = {-3,0,1,-3,1,1,1,-3,10,0};

//     Solution s ;
//     cout<<s.uniqueOccurrences(v);
//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using namespace std;

// int swapAlternate(int arr[], int n){
//     for(int i = 0; i<n-1 ; i+=2){
//         swap(arr[i] , arr[i+1]);
//     }
// }
// int main(){
//     int arr[] = {5,2,9,4,7,6,1,0};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     swapAlternate(arr,  n);
//     for(int i = 0; i<n; i++){
//         cout<< arr[i] <<" ";
//     }
//     return 0;
// }
#include<iostream>
using namespace std;
int findUnique(vector<int>)
int main(){
    return 0;
}