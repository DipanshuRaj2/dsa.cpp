#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
void decimalToBinary(int n){
    vector<int>v;
    int ans = 0;
    while(n != 0){
        ans = n % 2;
        v.push_back(ans);
        n = n/2;
    }
    reverse(v.begin(), v.end());
    for(auto ele : v){
        cout<<ele;
    }
}
int main()
{
  int n;
  cin >>n;
  decimalToBinary(n);

   return 0;
}