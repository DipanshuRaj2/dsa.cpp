//target sum
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
    int count = 0;
    int target = 1;
    for(int i = 0; i<n; i++){
        for(int j = i+1; j<n; j++){
            if(i == j){
                continue;
            }
            if(v[i]+v[j] == target){
                cout << v[i]<<" "<<v[j];
            }

        }
        
    }
    
   return 0;
}