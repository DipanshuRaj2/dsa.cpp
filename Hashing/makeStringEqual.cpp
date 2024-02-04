#include <bits/stdc++.h>
using namespace std;

bool checkEqual(vector<string>arr){
    map<char, int> mpp;
    for(string &str : arr){
        for(int i = 0 ; i < str.length() ; i++){
            mpp[str[i]]++ ;
        }
    }
    
    for(string &str : arr){
        for(int i = 0 ; i < str.length() ; i++){
            if(mpp[str[i]] % 3 != 0){
                return false ;                
            }
        }
    }
    return true ;
}

int main()
{
    vector<string>arr = {"collegeee", "coll", "collegge"};

    if(checkEqual(arr)){
        cout<<"possible"<<endl;
    }
    else{
        cout<<"impossobel";
    }

    return 0 ;
}