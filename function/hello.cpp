#include<iostream>
using namespace std;
int powerOf_a_and_b(int a , int b){
    int ans  = 1;
    for(int i = 0; i<b; i++){
        ans = ans  * a;
    }
    return ans;
}
int main()
{
    int a , b;
    cin >> a >> b;
    cout<<powerOf_a_and_b(a , b);
   return 0;
}