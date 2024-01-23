#include<bits/stdc++.h>
using namespace std;
int main(){
    set<int> st;
    st.insert(1);
    st.insert(2);
    st.insert(8);
    st.insert(1);
    st.insert(6);//{1,2,6,8}
    // stores in sorted and unique elements only

    auto it= st.find(3);//returns iterator that points to 3. returns st.end()
    st.erase(6);//erase 6
// multiset only have sorted, can store multiple numbers.
    st.lower_bound(2);
    st.upper_bound(4);
    return 0;
}