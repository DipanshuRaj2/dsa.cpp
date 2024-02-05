// #include <bits/stdc++.h>
// using namespace std;

// bool checkEqual(vector<string>arr){
//     map<char, int> mpp;
//     for(string &str : arr){
//         for(int i = 0 ; i < str.length() ; i++){
//             mpp[str[i]]++ ;
//         }
//     }
    
//     for(string &str : arr){
//         for(int i = 0 ; i < str.length() ; i++){
//             if(mpp[str[i]] % 3 != 0){
//                 return false ;                
//             }
//         }
//     }
//     return true ;
// }

// int main()
// {
//     vector<string>arr = {"collegeee", "coll", "collegge"};

//     if(checkEqual(arr)){
//         cout<<"possible"<<endl;
//     }
//     else{
//         cout<<"impossobel";
//     }

//     return 0 ;
// }

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;
bool canMakeEqual(vector<string>&v){
    unordered_map<char,int>m;

    for(auto str: v){
        for(char c: str){
            m[c]++;
        }
    }
    int n = v.size();
    for(auto ele:m){
        if(ele.second % n != 0){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    
    vector<string>v={"collegeee","coll","collegge"};

    cout<<(canMakeEqual(v)?"Yes":"No")<<endl;
    return 0;
}