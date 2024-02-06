#include<iostream>
#include<map>
using namespace std;
int main(){
    multimap<string, int>directory;
    directory.insert(make_pair("Dipanshu", 9110));
    directory.insert(make_pair("Aayal", 6420));
    directory.insert(make_pair("Nikhil", 1210));
    directory.insert(make_pair("Nikhil", 9110));

    for(auto ele :directory){
        cout<<"Name : "<<ele.first<<" Phone No : "<<ele.second<<"\n";
    }
    
    return 0;

}