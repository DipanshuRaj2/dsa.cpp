// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<string, int,greater<string>>directory;

//     directory["naman"] = 36;
//     directory["animesh"] = 74;
//     directory["ritu"] = 5678;

//     // for(auto element:directory){
//     //     cout<<"Name - "<<element.first<<" ";
//     //     cout<<"Phone no. - "<<element.second<<endl;
//     // }
//     cout<<endl<<endl<<endl;
//     directory["dipanshu"] = 5678;

//     //     for(auto element:directory){
//     //     cout<<"Name - "<<element.first<<" ";
//     //     cout<<"Phone no. - "<<element.second<<endl;
//     // }

//     map<string, int>::reverse_iterator itr;
//     for(itr = directory.rbegin(); itr != directory.rend();itr++){
//         cout<<itr->first<<"->"<<itr->second<<endl;
//     }
// }

//mcq

// #include<iostream>
// #include<map>
// using namespace std;

// int main(){
//     map<int , int>m;
//     m.insert({1,10});
//     m.insert({1,20});
//     m.insert({3,30});
//     m[4] = 40;

//     for(auto i : m){
//         cout<<i.first <<"-"<<i.second<<"\n";
//     }

//     return 0;
// }


//mcq2
// #include<iostream>
// #include<map>
// using namespace std;
// int main(){
//     map<int, char>m={{1,'a'},{2,'b'},{3,'c'},{4,'d'}};
//     m.erase(m.find(3), m.end());

//     for(auto i: m){
//         cout<<i.first<<" - "<<i.second<<"\n";
//     }
// }

#include<iostream>
#include<vector>
#include<map>
using namespace std;
int sumOfCommonElement(vector<int>v , int n){
    map<int, int>m;
    for(int i = 0;i<v.size(); i++){
        m[v[i]]++;
    }
    int sum = 0;
    for(auto ele: m){
        if(ele.second>1){
            sum = sum +ele.first;
        }
        
    }
    return sum;
}
int main(){
    vector<int>v ={1,2,3,2,1,4,4};
    int n = v.size();
    cout<<sumOfCommonElement(v , n);
    return 0;
}