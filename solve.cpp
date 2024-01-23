#include<bits/stdc++.h>
using namespace std;
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);//{1,2,4}

    q.back();//4
    q.front();//1
    return 0;
}