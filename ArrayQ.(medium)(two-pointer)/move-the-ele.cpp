#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int>v;
    for(int i = 0; i<n; i++){
        int ele; cin >> ele;
        v.push_back(ele);
    }

    for(int i = 0; i<n; i++){
        if(v[i] %2 == 0){
            cout<< v[i]<<" ";
        }
        
    }
    for(int i = 0; i<n; i++){
        if(v[i]%2 ==1){
            cout<<v[i]<<" ";
        }
    }
   return 0;
}