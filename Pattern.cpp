// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int count=1;
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         while(j<=i){
//             cout<<count++<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n ;
//     cin >> n;
//     printPat(n);
//    return 0;
// }



// #include<iostream>
// using namespace std;
// void PrintPat(int n){
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         int value = i;
//         while(j<=i){
//             cout<<value<<" ";
//             value++;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     PrintPat(n);
//    return 0;
// }

// #include<iostream>
// using namespace std;
// void printPat(int n){
// int value =2;

//     for(int i = 1; i<=n; i++){
        
//         for(int j = 1; j<=i;j++){
//             cout<< i-j+1<<" ";
            
//         }
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n; 
//     cin >> n;
//     printPat(n);
//    return 0;
// }

#include<iostream>
using namespace std;
void printPat(int n){
    int i = 1;
    while(i<=n){
        int j = 1 ; 
        char ch = 'A'+i-1;
        while(j<=n) {
            cout << ch<<" ";
            j++;
        }
        ch++;
        i++;
        cout<<endl;
    }
}
int main()
{
    int n ;
    cin >> n;
    printPat(n);
   return 0;
}