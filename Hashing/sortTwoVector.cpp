
#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;
void sortTwoVector(vector<int>v1,vector<int>v2){
    set<int>ans;
    int n = v1.size()+v2.size();
    for(auto ele : v1){
        ans.insert(ele);
    }
    for(auto ele : v2){
        ans.insert(ele);
    }
    for(auto ele :ans){
        cout<<ele<<" ";
    }
}
int main()
{
    // vector<int>v1 = {1,2,3};
    // vector<int>v2 ={4,5,6,2};
    // sortTwoVector(v1 , v2);
    cout<<"Hello world0";
   return 0;
}
