#include<iostream>
#include<vector>
using namespace std;
int secondLargestElement(vector<int>&v){
    int max = v[0];
    int max2 = v[0];
    int index = 0;
    for(int i = 1; i<v.size(); i++){
        if(v[i] > max){
            max = v[i];
            index = i;
        }
    } 
    for(int i = 0; i<v.size(); i++){
        if(v[i] > max2 && v[i]!= max){
            max2 = v[i];
        }
    }

    

    return max2;
}
int main(){
    vector<int>v ={10,12,23,23,4,5,7};
    

    cout<<"second largest element : "<<secondLargestElement(v); 




}