#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
    vector<int> twoRepeated(int arr[], int n){
        
        unordered_map<int,int>m;
        vector<int>ans;
        for(int i = 0; i<n+2; i++){
            m[arr[i]]++;
            if(m[arr[i]] == 2){
                ans.push_back(arr[i]);
            }
        }
        return ans;
    }
};
int main()
{
    Solution s;
    vector<int>ans;
    int arr[] = {1,2,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    ans = s.twoRepeated(arr,n);
    for(int i = 0; i<ans.size()-1; i++){
        cout<<ans[i]<<" ";
    }
   return 0;
}