// // #include<iostream>
// // #include<set>
// // #include<vector>
// // using namespace std;
// // int main(){
// //     // set<string>s1;
// //     // int n;
// //     // cin >> n;
// //     // string name;
// //     // while(n--){
// //     //     getline(cin, name);
// //     //     s1.insert(name);
// //     // }
// //     // cout <<"Final Invite list: ";
// //     // for(auto name:s1){
// //     //     cout <<name<<endl;
// //     // }
// //     // int m , n;
// //     // cout << "Size of m and n: "<<endl;
// //     // cin >> m >> n;

// //     // vector<int> v1(m);
// //     // vector<int> v2(n);

// //     // cout <<"Enter the Elements in the v1: ";
// //     // for(int i = 0;i<m; i++){
// //     //     cin>>v1[i];
// //     // }

// //     // cout<<"Entet the Elements in the v2: ";
// //     // for(int i = 0; i<n; i++){
// //     //     cin>>v2[i];
// //     // }
// //     // set<int>s1;
// //     // for(auto ele : v1){
// //     //     s1.insert(ele);
// //     // }
// //     // int sum= 0;
// //     // for(auto ele :v2){
// //     //     if(s1.find(ele)!= s1.end()){
// //     //         sum = sum+ele;//sum+= ele;
// //     //     }
// //     // }

// //     // cout <<"After the adding the common Element: "<<sum;

// //     // return 0;
    
// //  }

// #include<bits/stdc++.h>
// using namespace std;
// bool checkAllAlphabets(string name){
//     if(name.length()<26){
//         return false;
//     }
//     transform(name.begin(), name.end(),name.begin(),::toupper);
//     set<char>s1;
//     for(auto ch : name){
//         s1.insert(ch);
//     }
//     return (s1.size()==26);
// }
// int main(){
//     string name;
//     cin>>name;
//     if(checkAllAlphabets(name)){
//         cout <<"Yes";
//     }
//     else{
//         cout <<"No";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    string s ;
    getline (cin , s);
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout << s;
}
