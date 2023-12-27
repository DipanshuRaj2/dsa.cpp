#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(6);
    cout<<"Enter the Elements: "<<endl;
    for(int i = 0; i<v.size(); i++){
        cin >> v[i];
    }
    cout <<"Enter the Element which is greater than x: ";
    int x; 
    cin >> x;

    bool found = false;
    for(int i = 0; i<v.size(); i++){
        if(v[i]==x){
            found = true;
            break;
        }
      
    }
    if(found){
        int count=0;

    for(int i = v.size()-1; i>=0; i--){
        if(v[i]>x){
            count++;
            
        }
    }
    cout<<"total no. of occurence of given element: "<<count;
    }
    else{
        cout <<"Element not found: ";
    }
    

    return 0;
}
