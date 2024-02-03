#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int firstRepeated(int arr[], int n){
        map<int, int>m;

        for(int i =0; i<n; i++){
            m[arr[i]]++;
        }
        for(int i = 0; i<n; i++){
            if(m[arr[i]]>1){
                return i+1;
            }
        }
        return -1;
    }
};
int main()
{
    Solution s;

    int arr[] = {1, 2, 3, 4}; //{1, 5, 3, 4, 3, 5, 6}
    int n = sizeof(arr)/sizeof(arr[0]);

   cout<< s.firstRepeated(arr,n);
   return 0;
}