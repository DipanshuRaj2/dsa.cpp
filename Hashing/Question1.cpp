//Implement hash table with closed addressing
//separate chaining
#include<iostream>
#include<vector>
#include<map>
using namespace std;

// int sumOfCommonElement(vector<int>&v){
//     for(int i = 0; i<v.size(); i++){

//     }
// }


int main(){
    int n ;
    cin >> n;

    vector<int>input(n);

    for(int i = 0; i<n; i++){
        cin >> input[i];
    }

    map<int , int> m;
    for(int i = 0; i<n; i++){
        //storing frequency of every element
        m[input[i]]++;
    }
    int sum = 0;
    //finding sum of repetitive elements
    //pair - element, frequency
    for(auto pair:m) {
        if(pair.second > 1){
            //element is repetetive
            cout<< pair.first<<endl;
            sum = sum+pair.first; 
        }
    }
    cout<<"Ans = "<<sum;
}
