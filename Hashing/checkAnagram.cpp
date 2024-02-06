//checK anagram
// #include<bits/stdc++.h>
// using namespace std;
// bool checkAnagram(string s1, string s2){
//     vector<char>v1;
//     vector<char>v2;
//     for(int i = 0; i<s1.length(); i++){
//         v1.push_back(s1[i]);
//     }
//     for(int i = 0; i<s2.length(); i++){
//         v2.push_back(s2[i]);
//     }
//     sort(v1.begin(), v1.end());
//     sort(v2.begin(),v2.end());

//     if(v1 == v2){
//         return true;
//     }
//     else{
//         return false;
//     }
    
// }
// int main()
// {
//     string s1 = "triaggle";
//     string s2 = "integral";
//     cout<<(checkAnagram(s1, s2)?"Yes":"No");
//    return 0;
// }

// #include<bits/stdc++.h>
// using namespace std;
// bool checkAnagram(string s1, string s2){
//     unordered_map<char , int>m1;
//     unordered_map<char , int>m2;

//     for(int i = 0; i<s1.length(); i++){
//         m1[s1[i]]++;
//     }

//     for(int i = 0; i<s2.length(); i++){
//         m2[s2[i]]++;
//     }

//     for(auto ele: m1){
//         cout<<ele.first<<" "<<ele.second<<endl;
//     }

//     if(m1 == m2){
//         return true;
//     }
//     else{
//         return false;
//     }



// }
// int main()
// {
//     string s1 = "rat";
//     string s2 = "cat";
//     cout<<(checkAnagram(s1 ,s2)?"yes" : "No");
//    return 0;
// }

#include<bits/stdc++.h>
using namespace std;
bool checkAnagram(string s1, string s2){
    unordered_map<char, int> m;

    for(int i = 0; i<s1.length(); i++){
        m[s1[i]]++;
    }
    for(int i = 0; i<s2.length(); i++){
        m[s2[i]]--;
    }

    for(auto &ele : m){
        if(ele.second !=0){
            return false;
        }
    }
    return true;
}
int main()
{
    string s1 = "triangle";
    string s2 = "integral";
    cout<<(checkAnagram(s1,s2)?"Yes" : "No");
   return 0;
}