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



// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int i = 1; 
//     while(i<=n){
//         int j = n;
//         while(j>=i){
//             cout<<"*"<<" ";
//             j--;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n  ;
//     cin >> n;
//     printPat(n);
//    return 0;
// }



// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int i = 1;
//     while(i<=n){
//         int spaces = i-1;
//         while(spaces){
//             cout<<" ";
//             spaces--;
//         }
//         int j = n-i+1;
//         while(j>=1){
//             cout<<"*";
//             j--;
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
//     while(i<=n){
//         int spaces = i-1;
//         while(spaces){
//             cout<<" ";
//             spaces--;
//         }
//         int j = n, value = i;
//         while(j>=i){
//             cout<<value;
//             j--;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// int main(){
//     int n;
//     cin >> n;
//     printPat(n);
//     return 0;
// }



// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int i = 1;
//     while(i<=n){
//         int spaces = n - i;
//         while(spaces){
//             cout<<" ";
//             spaces--;
//         }
//         int value = i;
//         int j = 1;
//         while(j<=i){
//             cout<<value;
//             j++;
//         }
//         i++;
//         cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >>n;
//     printPat(n);
//    return 0;
// }



// #include<iostream>
// using namespace std;
// void printPat(int n){
// int i = 1;
// while(i<=n){
//     int spaces = i-1;
//     while(spaces){
//         cout<<" ";
//         spaces--;
//     }
//     int j = n, value = i;
//     while(j>=i){
//         cout<<value++;
//         j--;
//     }
//     i++;
//     cout<<endl;
//    }
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
//     int i =1, count = 1;
//     while(i<=n){
//         int spaces = n-i;
//         while(spaces){
//             cout<<" ";
//             spaces--;
//         }
//         int j = 1;
//         while(j<=i){
//             cout<<count++;
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
//     //print space
//     while(i<=n){
//         int spaces = n - i;
//         while(spaces){
//         cout<<" ";
//         spaces--;
//     }
//     //print 2nd part triangle
//     int j = 1 ;
//     while(j<=i){
//         cout<<j;
//         j++;

//     }

//     //print 3rd triangle
//     int start = i - 1;
//     while(start){
//         cout<<start;
//         start--;
//     }
//     i++;
//     cout<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     printPat(n);
//    return 0;
// }




#include <iostream>
using namespace std;

int main()
{

    int number;
    cin >> number;

    int i = 1;

    int counter = 1;
    while (i <= number)
    {
        // Printing First triangle.
        int first = number - i + 1;
        int count = 1;
        while (first)
        {
            cout << count;
            count++;
            first--;
        }

        // Printing half stars
        int halfLeftStars = i - 1;
        while (halfLeftStars)
        {
            cout << "*";
            halfLeftStars--;
        }
        // Printing 2nd Half stars.
        int stars2 = i - 1;
        while (stars2)
        {
            cout << "*";
            stars2--;
        }
        // Printing 3rd Triangle
        int tri2 = number - i + 1;
        while (tri2)
        {
            cout << tri2;
            tri2--;
        }

        cout << endl;
        row++;
    }
}























// #include<iostream>
// using namespace std;
// void printPat(int n){
//     int i = 1;
//     while(i<=n){
//         int j = n , count = 1;
//         while(j>=i){
//             cout<<count++;
//             j--;
//         }
//         int halfStar = n - j;
//         while(halfStar){
//             cout<<"*";
//             halfStar--;

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