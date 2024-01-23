#include<bits/stdc++.h>
using namespace std;
int main(){
    // every operation happens in constant time.
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);//{5,3,2,1}

    cout<<st.top();//5
    st.pop();//{1,2,3}
    return 0;
}