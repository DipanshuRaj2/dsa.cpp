#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public:
    int hammingWeight(uint32_t n){
        int count = 0;
        while(n!=0){
            if(n & 1){
                count++;
            }
            n = n >> 1;
        }

        return count;
    }
    
};
int main()
{
   uint32_t n = 11111111111111111111111111111101;
//    11111111111111111111111111111101
    Solution s;
    cout<<s.hammingWeight(n);


   return 0;
}