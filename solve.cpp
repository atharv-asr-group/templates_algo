#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int> p={1,3};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> pp={1,{2,3}};
    cout<<pp.first<<pp.second.first<<pp.second.second;
    pair<int,int>arr[]={{1,2},{2,3},{4,5}};
    return 0;
}