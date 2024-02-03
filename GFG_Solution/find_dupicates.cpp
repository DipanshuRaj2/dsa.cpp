// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;
// class Solution{
//     public:
//     vector<int> duplicates(vector<long long>arr, int n) {
//         set<long long>ans;

//         for(int i = 0; i<n-1; i++){
//             for(int j =i+1 ; j<n; j++){
//                 if(arr[i]==arr[j]){
//                     ans.insert(arr[i]);
//                 }
//             }
//         }

//         // Convert set to vector
//         vector<int> result(ans.begin(), ans.end());

//         if (result.size()) {
//             return result;
//         }
//         return {-1};
//     }
// };
// int main(){
//     Solution s;
//     int n = 5;
//     vector<int>ans;
//     vector<long long> arr = {3 ,4, 12, 3, 12, 3, 4, 4, 12, 7, 11, 6 ,5} ;
//     ans= s.duplicates(arr ,arr.size());
//     for(auto ele:ans){
//         cout<<ele<<" ";
//     }
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int>duplicates(long long arr[],int n){
        sort(arr, arr +n);
        vector<int>ans;
        for(int i = 0; i<n-1;i++){
            if(arr[i] == arr[i+1]){
                ans.push_back(arr[i]);
            }
        }
        if(ans.size()){
            return ans;
        }
        return {-1};
    }

};
int main()
{ 
    Solution s;
    long long arr[] = {3 ,4, 12, 3, 12, 3, 4, 4, 12, 7, 11, 6, 5};

    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    ans = s.duplicates(arr , n);
    for(auto ele : ans){
        cout<<ele<<" ";
    }
    
   return 0;
}