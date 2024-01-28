#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int>getStoreNumber(int n){
        vector<int> storeNum ;
        while(n != 0){
            int number = n % 10 ;
            storeNum.push_back(number) ;
            n = n / 10 ;
        }
        return storeNum ;
    }
    bool isHappy(int n) {
        if(n < 0) return false ;
        vector<int>storeNumber = getStoreNumber(n) ;
        int sum = 0 ;
        
        while(sum != 1){
            for(int i = 0 ; i < storeNumber.size() ; i++){
                sum += (storeNumber[i] * storeNumber[i]) ;
            }

            storeNumber.clear() ;
            storeNumber = getStoreNumber(sum) ;
            if(sum == 1){
                return true ;
            }
            if(sum == 4) return false ;
            sum = 0 ;
        }
        return true ;
    }
};

int main(){
    int n ;

    cin>>n;

    Solution s ;
    cout<<s.isHappy(n)<<endl;
    
    return 0;
}