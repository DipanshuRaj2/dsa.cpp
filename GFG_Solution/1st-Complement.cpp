#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
        string onesComplement(string S, int N){
        for(int i = 0; i<N; i++){
            if(S[i]=='0'){
                S[i] = '1';
            }
            else if(S[i] == '1'){
                S[i] = '0';
            }
        }
        
        return S;
        }

};
int main()
{
    string str="0110110011111110";
    int n = str.length();
    Solution s;
    cout<< s.onesComplement(str,n);

   return 0;
}