#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;  // S C
    v.push_back(1); // 1 1
    v.push_back(2); // 2 2
    v.push_back(3); // 3 4
    v.push_back(4); // 4 4
    v.push_back(5); // 5 8
    v.push_back(6); // 6 8
    v.push_back(7); // 7 8
    v.push_back(8); // 8 8
    v.push_back(9); // 9 16
    v.push_back(10);// 10 16
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size:"<<v.size()<<endl; // 10
    cout<<"Capacity:"<<v.capacity()<<endl; // 16

    v.pop_back();
    cout<<"After POP : ";
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size:"<<v.size()<<endl; // 9  --> size changes
    cout<<"Capacity:"<<v.capacity()<<endl; // 16 --> capacity not changes(ek bar 16 space le liya to le liya)

}