#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);//{10,8,5,2}
    pq.top();//10
    pq.pop();//{8,5,2}

    // min heap
    priority_queue<int, vector<int>,greater<int>> pq;
    // prefers min element.
    
    return 0;
}