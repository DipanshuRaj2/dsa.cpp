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

// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int i = 1;
//     while(i<=n){
//         int j = 1 ; 
//         char ch = 'A'+i-1;
//         while(j<=n) {
//             cout << ch<<" ";
//             j++;
//         }
//         ch++;
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
// void printPat(int n){
//     int i = 1;
//     while(i<=n){
//         int j = 1 ; 
//         char ch = 'A';  // char ch = 'A'-j + 1;
//         while(j<=n) {
//             cout << ch++<<" ";
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
// void printPat(int n){
//     int i = 1;
//     char ch = 'A';
//     while(i<=n){
//         int j = 1 ; 
//         while(j<=n) {
//             cout << ch<<" ";
//             j++;
//             ch++;
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
// void printPat(int n){
//     int i = 1;
//     while(i<=n){
//         int j = 1;
//         char ch = 'A'+i-1;
//         while(j<=n){
//             cout<< ch++<<" ";
//             j++;
//         }
//         i++;
//         cout << endl;
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
// void printPat(int n){
//     int i  = 1;
//     while(i<=n){
//         int j = 1;
//         int ans = i-j+1;
//         while(j<=n){
//             cout<< ans++<<" ";
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
// void printPat(int n){
//     int i = 1;
//     while(i <=n){
//         int j = 1;
//         char ch = 'A'+i-1;
//         while(j<=i){
//             cout<<ch<<" ";
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
//     printPat(n);
//    return 0;
// }

// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int i = 1;
//     while(i <=n){
//         int j = 1;
//         char ch = 'A'+i-1;
//         while(j<=i){
//             cout<<ch++<<" ";
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
//     printPat(n);
//    return 0;
// }

// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int i = 0;
//     while(i<=n){
//         int j = 0;
//         char ch = 'A' + n - i;
//         while(j<=i){
//             cout<<ch++<<" ";
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// int main(){
//     int n ;
//     cin  >> n;
//     printPat(n);
//     return 0;
// }









// mirror right angle triangle

// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int i = 1;
//     while(i<=n){
//          int spaces = n -i;
//         while(spaces){
//             cout<<" ";
//             spaces--;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<"A";
//             j++;
//         }
//         i++;
//         cout<< endl;
//     }
// }
// int main()
// {
//     int n = 0;
//     cin >> n;
//     printPat(n);
//    return 0;
// }

#include<iostream>
using namespace std;
void printPat(int n){
    int i = 1; 
    while(i<=n){
        int j = n;
        while(j>=i){
            cout<<"*"<<" ";
            j--;
        }
        i++;
        cout<<endl;
    }
}
int main()
{
    int n  ;
    cin >> n;
    printPat(n);
   return 0;
}
