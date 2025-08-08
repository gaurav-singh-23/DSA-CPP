#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(5);
    for(int i = 0;i<5;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end()); // this is more efficient(O(nlogn)) than bubble sort // -----> in ascending order 
    reverse(v.begin(),v.end()); // ----> after sorting reversed -----> so now it is in descending order
    for(int i = 0;i<5;i++){
        cout<<v[i]<<" ";
    }
}