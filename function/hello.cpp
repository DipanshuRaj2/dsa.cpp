// #include<iostream>
// using namespace std;
// int powerOf_a_and_b(){
//     int a ,b;
//     cin >> a >> b;
//     int ans  = 1;
//     for(int i = 0; i<b; i++){
//         ans = ans  * a;
//     }
//     return ans;
// }
// int main()
// {

//     cout<<powerOf_a_and_b()<<endl;
//     cout<<powerOf_a_and_b();
//    return 0;
// }
// #include<iostream>
// using namespace std;
// bool isEven(int num){
//     if(num % 2==0){
//         return true;
//     }
//     return false;
// } 
// int main()
// {
//     int num;
//     cin >> num;
//     if(isEven(num)){
//         cout<<"number is even :"<<num;
//     }
//     else{
//         cout<<"number is odd: "<<num;
//     }
//    return 0;
// }
// #include<iostream>
// using namespace std;
// int factorial(int n){
//     int ans = 1;
//     for(int i = 1; i<=n; i++){
//     ans = ans * i;
//     }
//     return ans;
// }
// int nCR(int n,int r){
//     int num = factorial(n);
//     int deno = factorial(r) * factorial(n-r);

//     return num/deno;
// }


// int main()
// {
//     int n , r;
//     cin >> n >> r;
//     int ans = nCR(n , r);
//     cout<<ans;
//    return 0;
// }
// #include<iostream>
// using namespace std;
// void counting(int n){
//     for(int i = 0; i<n; i++){
//         cout << i<<" ";
//     }
// }
// int main()
// {
//     int n ;
//     cin >> n;
//     counting(n);
//    return 0;
// }
#include<iostream>
using namespace std; 
bool isPrime(int n){
    for(int i = 2; i<=24; i++){
        if(n % i == 1){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n = 27;
    if(isPrime(n)){
        cout<<"Prime no: "<< n;
    }
    else{
        cout<<"No prime no: "<<n;
    }
    return 0;
}