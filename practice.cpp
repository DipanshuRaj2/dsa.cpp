// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<set>
// using namespace std;

// int main(){

//     int n, m ;
//     cout<<"Enter the value of n and m"<<endl;
//     cin >> n >> m;
//     long long arr1[n];
//     long long arr2[m];


//     cout<<"Enter the Element in the arr1 "<<endl;
//     for(int i = 0; i<n; i++){
//         cin >> arr1[i];
//     }
//     cout<<"Enter the Element in the arr2 "<<endl;
//     for(int i = 0; i<m; i++){
//         cin >> arr2[i];
//     }
//     sort(arr1, arr1+n);
//     sort(arr2, arr2+m);


//     cout<<"Element in the arr1 "<<endl;
//     for(int i = 0; i<n; i++){
//         cout << arr1[i]<<" ";
//     }
//     cout<<endl;

//     cout<<"Element in the arr2 "<<endl;
//     for(int i = 0; i<m; i++){
//         cout << arr2[i]<<" ";
//     }
//     cout<< endl;
//     vector<int>v;
    

//     for(int i = 0; i<n; i++){
//         v.push_back(arr1[i]);
        
//     }

//     for(int i = 0; i<m; i++){
//         v.push_back(arr2[i]);
//     }
//     cout<< endl;
//     cout<<"Element in the new array ";
//     for(int i = 0; i<v.size(); i++){
//         cout<< v[i]<<" ";
//     }
//     set<int>v2;
//     for(auto v2 : v){
//         cout<< v2<<" ";
//     }

// }

#include<iostream>
using namespace std;
int main(){
    float sum=0;
    int count = 0;
    // float average = 0;
    for(int i = 0; i<=19; i++){
        sum =sum+i;
        count++;
    }
    cout<<count;
    cout<<"sum : "<<sum<<endl;
    float average = (sum/count);  
    cout<<"average : "<<average;
}