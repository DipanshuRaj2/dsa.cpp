
/*#include<iostream
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
}*/
//hello hi
// #include<iostream>
// #include<vector>
// using namespace std;

// int checkSorted(vector<int>v){
//     bool check = true;
//     for(int i = 0; i<v.size(); i++){
//         if(v[i] > v[i+1]){
//             check = false;
//         }
//     }
//     return check;
// }

// int main(){
//     vector<int>v = {0,0,0,1};
//     cout <<checkSorted(v);

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// vector<vector<int>> pairSum(vector<int> &arr, int s){
//    // Write your code here.

//    for(int i = 0; i<arr.size(); i++){
//       for(int j = i+1; j<arr.size();j++){
//          if(arr[i]+ arr[j] == s){
//            return {arr[i], arr[j]};
//          }
//       }
//    }
//    return {};
// }
// int main(){
//     vector<int>v= {1, 2, 3, 4, 5};
//     int s;
//     cin >> s;
//     pairSum(v , s);.
    
// }

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin ,s);
    transform(s.begin(), s.end(),s.begin(),::tolower);
    cout << s;
    return 0;
}