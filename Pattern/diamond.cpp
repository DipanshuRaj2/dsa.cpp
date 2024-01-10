#include<iostream>
using namespace std;

int main(){
    int row,spa,col; 
    for(row = 1; row<=4; row++){
         //row
        for(spa = 1; spa<=4-row; spa++){ //spaces
            cout <<" ";
        }
        for(col =1;col=row*2-1;col++){
            cout<<"*";
        }
        cout<<endl;
    }
}