#include<iostream>
#include<unordered_map>
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int , string>record;
    record.insert(make_pair(3, "ria"));
    record[1] = "animesh";
    record[2] = "bali";
    record[3] = "payal";

    for(auto pair: record){
        cout<<"Roll no :"<<p  air.first<<"  Name : "<<pair.second;
        cout<<endl;

    }

}