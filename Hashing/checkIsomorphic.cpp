//using map
// #include<bits/stdc++.h>
// using namespace std;
// bool checkOneToOne(string s1, string s2){
//     unordered_map<char, char>m;
//     for(int i = 0; i<s1.length(); i++){
//         if(m.find(s1[i]) != m.end()){
//             if(m[s1[i]] != s2[i]){
//                 return false;
//             }
//         }
//         else{
//             m[s1[i]] = s2[i];
//         }
//     }
//     return true;
// }

// bool checkIsomorphic(string s1, string s2){
//     if(s1.length()!=s2.length()){
//         return false;
//     }
//     bool s1s2 = checkOneToOne(s1, s2);
//     bool s2s1 = checkOneToOne(s2,s1);

//     return s1s2 && s2s1;
// }
// int main()
// {
//     string s1  = "aab";
//     string s2  = "xxy";
    
//     cout<<(checkIsomorphic(s1, s2)? "Isomorphic" : "Not Isomorphic");
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
bool checkIsomorphic(string s1, string s2){
    vector<int>v1(128, -1);
    vector<int>v2(128, -1);

    for(int i = 0; i<s1.size(); i++){
        if(v1[s1[i]] != v2[s2[i]]){
            return false;
        }
        v1[s1[i]] = v2[s2[i]] = i;
        }
        return true;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;

    cout<<(checkIsomorphic(s1, s2)?"is isomorphic" : "no isomorphic");
    // if(checkIsomorphic(s1,s2)){
    //     cout<<"Is isomorphic";

    // }
    // else{
    //     cout<< "No isomorphic";
    // }
   return 0;
}