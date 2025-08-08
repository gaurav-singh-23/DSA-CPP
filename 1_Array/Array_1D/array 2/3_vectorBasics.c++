#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v; // need not to mention the size
    // while inserting/input use push_back do not use [] if size is not mentioned
    v.push_back(6);
    //cout<<v.size()<<endl; 1
    cout<<v.capacity()<<endl;
    v.push_back(11);
    //cout<<v.size()<<endl; 2
    cout<<v.capacity()<<endl;
    v.push_back(9);
    //cout<<v.size()<<endl; 3
    cout<<v.capacity()<<endl;
    v.push_back(0);
    //cout<<v.size()<<endl; 4
    cout<<v.capacity()<<endl;

    // v[0]=6; // segmentation fault
    // v[1]=1;
    // v[2]=9;
    // v[3]=0;

    // To acces/update we can use []
    v[0] = 88;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";
    cout<<v[4]<<" "; // print Garbage value
}