#include<iostream>
using namespace std;
class Solution{
   public:

   int subtractProductAndSum(int n) {
      int n1 = n; 
      int mul = 1;
      while(n != 0){
         int digit = n % 10;
         mul = mul * digit;
         n = n /10;
      }
      int add = 0;
      
      while(n1 != 0){
         int digit = n1 % 10;
         add =  add + digit ;
         n1 = n1/10;
      }
      return mul-add;

   }
};
int main()
{
   int n;
   cin >> n;
   Solution sol ;
   cout<< sol.subtractProductAndSum(n);
   return 0;
}