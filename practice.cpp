#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    cout<<"Enter the Elements: "<<endl;
    for(int i = 0; i<v.size(); i++){
        cin >> v[i];
    }
    cout <<"Enter the last occurence of the Element: ";
    int x; 
    cin >> x;

    for(int i = 0; i<v.size(); i++){
        if(v[i]==x){
            cout <<"Element found: ";
            
        }
        else{
            cout <<"Element not found: ";
        }
        
    }

    return 0;
}