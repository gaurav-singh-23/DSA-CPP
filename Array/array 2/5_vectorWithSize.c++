#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5);  // initial size = 5 , each element has value = 0
    cout<<v.size()<<endl; // 5 --> because vector is created and by default 0 are filled
    cout<<v.capacity()<<endl; // 5
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";  // 0 0 0 0 0
    }

    cout<<endl<<endl;

    vector<int> v1(5,7); // initial size = 5 , each element has value = 7
    cout<<v1.size()<<endl; 
    cout<<v1.capacity()<<endl;
    for(int i=0;i<v1.size();i++){
        cout<<v1[i]<<" ";  // 7 7 7 7 7
    }
}

// vector is all about shorcuts