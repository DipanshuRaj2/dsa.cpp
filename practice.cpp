// #include<iostream>
// #include<vector>
// using namespace std;
// int secondLargestElement(vector<int>&v){
//     int max = v[0];
//     int max2 = v[0];
//     int index = 0;
//     for(int i = 1; i<v.size(); i++){
//         if(v[i] > max){
//             max = v[i];
//             index = i;
//         }
//     } 
//     for(int i = 0; i<v.size(); i++){
//         if(v[i] > max2 && v[i]!= max){
//             max2 = v[i];
//         }
//     }

    

//     return max2;
// }
// int main(){
//     vector<int>v ={10,12,23,23,4,5,7};
    

//     cout<<"second largest element : "<<secondLargestElement(v); 




// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr1[] = {1,2,3,4,5};
//     int n1 = sizeof(arr1)/sizeof(arr1[0]);

//     int arr2[] = {6,7,8,9,10};
//     int n2 = sizeof(arr1)/sizeof(arr1[0]);
     
//     int n3 = n1 +n2;
//     int arr3[n3];
//     int j = 0;

//     for(int i = 0; i<n1; i++){
//         arr3[j++] = arr1[i];
//     }
//     for(int i = 0; i<n2; i++){
//         arr3[j++] = arr2[i];
//     }

//     for(int i = 0; i<n3; i++){
//         cout<<arr3[i]<<" ";
//     }

//    return 0;
// }


//
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     vector<int>v = {1,2,3,4,5};
//     int n = v.size();

//     int k = 3;
//     k = k % n; // rotate
    
//     // int j = 0; 
//     // vector<int>ansArray(n); 

//     // for(int i = n-k; i<n; i++){
//     //     ansArray[j++] = v[i];
//     // }
//     // for(int i = 0; i<=k; i++){
//     //     ansArray[j++] = v[i];
//     // }
//     // for(int j = 0; j<n; j++){
//     //     cout<<ansArray[j]<<" ";
//     // }

//     reverse(v.begin(),v.end());
//     reverse(v.begin(), v.begin()+k);
//     reverse(v.begin()+k , v.end());

//     for(int i = 0; i<n; i++){
//         cout<<v[i] <<" ";
//     }

// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// void sort0And1(vector<int>&v){
//     sort(v.begin(),v.end());
// }
// int main(){
//     vector<int>v={1,0,1,0,1,0,1,0};
//     int n = v.size()-1;
//     // vector<int>ans(n);
//     int leftPtr = 0;
//     int rightPtr = n;

//     while(leftPtr < rightPtr){
//         if(v[leftPtr] == 1 && v[rightPtr] == 0){
//             swap(v[leftPtr], v[rightPtr]);
//             leftPtr++;
//             rightPtr--;
//         }
//         else if(v[leftPtr] == 0){
//             leftPtr++;
//         }
//         else if(v[rightPtr] == 1){
//             rightPtr--;
//         }
//     }
//     for(auto ele : v){
//         cout<< ele <<" ";
//     }
//     return 0;
// }
// #include<iostream>
// #include<vector>
// using namespace std;
// void sortByParity(vector<int>v){
//     int left_ptr = 0;
//     int right_ptr = v.size()-1;

//     while(v[left_ptr]%2==1 && v[right_ptr]%2==0){
//         swap(v[left_ptr], v[right_ptr]);
//         left_ptr++; right_ptr;
        
//     }
// }
// int main()
// {
//     vector<int> v= {1,2,3,4,5};
//     int n = v.size();
//     sortByParity(v);
//     for(auto ele :){
//         cout<<ele <<" ";
//     }
//    return 0;
// }

// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// void squareTheSorted(vector<int>&v){
//     vector<int>ans;
//     int left = 0;
//     int right = v.size()-1;
//     while(left<=right){

//         if(abs(v[left]) < abs(v[right])){
//             ans.push_back(v[right]*v[right]);
//             right--;
//         }

//         else{
//             ans.push_back(v[left]*v[left]);
//             left++;
//         }
//     }
//     reverse(ans.begin(),ans.end());
//     for(auto ele :ans){
//         cout<<ele<<" ";
//     }

// }
// int main(){
//     vector<int>v = {-10,-3,2,5,6};

//     squareTheSorted(v);

//     return 0;
// }
// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;

// vector<int>getArr(vector<int>arr, int start, int end){

// }

// int main()
// {
//     int n;
//     cin >> n;
//     vector<int>v;

//     for(int i = 0; i<n; i++){
//         int x;
//         cin >> x;
//         v.push_back(x);
//     }
//     for(int i = 0; i<n; i++){
//         cout<<v[i]<<" ";
//     }
    
//     int n1;
//     cin>>n1;
//     vector<int>arr;
//     int i;
//     for(i = 0; i<n1;i++){
//     int ele;
//     cin >> ele;
//     arr.push_back(ele);
//     }
//     int 
//     v.erase(v.begin()+arr[i]-1, v.begin()+arr[i+1]);

//     // intv.size();
//     cout<<v.size();
//     for(auto ele : v){
//         cout<<ele<<" ";
//     }
    

//    return 0;
// }

// convert decimal to binary

#include<iostream>
using namespace std;
int main()
{
    // int binaryNum[32];
    // int n = 8;
    // int i = 0;
    // while(n >= 0){
    //     binaryNum[i] = n % 2;
    //     n = n/2;
    //     i++;
    // }

    // for(int j = i-1; j >= 0; j--){
    //     cout<<binaryNum[j] <<" ";
    // }
    cout<<"Hello world";
   return 0;
}