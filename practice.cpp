#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void countZero(vector<int>&v){
    int count =0;
    for(int i = 0; i<v.size(); i++){
        if(v[i]==0){
            count++;
        }
    }
    for(int i = 0; i<v.size(); i++){
        if(i<count){
            v[i] = 0;
        }
        else{
            v[i] = 1;
        }
    }
}
int main(){
    // sort the array by 0 and 1;
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin >> n;
    vector<int>v;

    cout<<"Enter the Element in the array: ";
    for(int i = 0; i<n; i++){
        int element; cin>>element;
        v.push_back(element);
    }

    countZero(v);
    for(int i = 0; i<n; i++){
        cout<<v[i]<<" ";
    }

    return 0;
}