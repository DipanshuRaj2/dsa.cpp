#include<bits/stdc++.h>

using namespace std;

void printStackElement(stack<int>s){
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(3);
    st.push(10);
    st.push(-3);
    st.push(9);

    cout<<st.empty()<<endl;
    cout<<st.size()<<endl;
    printStackElement(st);
    return 0;
}