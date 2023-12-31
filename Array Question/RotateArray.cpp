/*Rotate the given array 'a' by k steps, where k is non-negative.
NOTE: k can be greater than n as well where n is the size of array 'a'

arr[]={1,2,3,4,5}; k=5;

o/p = {5,1,2,3,4}; k=1
o/p = {4,5,1,2,3}; k=2
o/p = {3,4,5,1,2}; k=3
o/p = {2,3,4,5,1}; k=4
o/p = {1,2,3,4,5}; k=5

if k = n then we got the orginal array
so we use k = k%n



*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5};
    int n = v.size(); 
    int k = 2; //No. of Rotation

    //k can be greater than n
    k = k % n; // k = n(find the original array)

    vector<int> ansArray(n); //After Rotation
    int j =0;


    //insering the last element in ans array
    for(int i = n-k; i<n; i++){
        ansArray[j++]=v[i];
    }
    //inserting the first element in ans array
    for(int i = 0; i<=k; i++){
        ansArray[j++] = v[i];
    }
    //print the array;
    for(int i = 0; i<n; i++){
        cout << ansArray[i]<<" ";
    }
    return 0;
}

