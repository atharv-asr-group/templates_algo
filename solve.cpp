#include<bits/stdc++.h>
using namespace std;
int main(){
    // vector is similar to array but is of dynamic size.
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);

    vector<int> v10(5,100);
    // {100,100,100,100,100}
    vector<int> v3(5);
    vector<int> v2(v3);

    cout<<v10[3];

    vector<int>::iterator it=v.begin();
    // v.begin points to the memory, not the value
    it++;//memory location moved
    cout<<*(it)<<' ';

    vector<int>::iterator endit=v.end();
    // v.end points to the memory just after the end of the vector, 
    // so to access the last element we will have to do endit--;
    // {10,20,30}v.erase takes iterator, this will delete the second element
    v.erase(v.begin()+1);

    v.pop_back();//{10,20} to {10}
    v3.swap(v2);//the vectors will get interchanged.

    v.clear();//erases the entire vector.
    return 0;
}