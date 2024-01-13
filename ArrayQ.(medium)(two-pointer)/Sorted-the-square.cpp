// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main()
// {   
//     int n;
//     cin>>n;
//     vector<int>v;
//     for(int i = 0; i<n; i++){
//         int ele;
//          cin>>ele;
//         v.push_back(ele);
//     }
//     vector<int>v1(n);
//     for(int i = 0; i<n; i++){
//         v1[i]=v[i]*v[i];
       
//     }
//     sort(v1.begin(),v1.end());
//     for(int i = 0; i<n; i++){
//         cout<< v1[i]<<" ";
//     }
//    return 0;
// }


//another approach
#include<iostream>
#include<vector>
using namespace std;

void sortTheSquareArray(vector<int>&v){
    vector<int>ans;
    int left_ptr = 0;
    int right_ptr = v.size()-1;
    while(left_ptr<=right_ptr){
        if(abs(v[left_ptr])<abs(v[right_ptr])){
            ans = v[left_ptr]*v[left_ptr];

        }
        else{
            ans  = v[right_ptr]*v[right_ptr];
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>v;

    for(int i = 0; i<v.size(); i++){
        int ele; cin>>ele;
        v.push_back(ele);
    }

    sortTheSquareArray(v);

    for(int i = 0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    return 0;
}