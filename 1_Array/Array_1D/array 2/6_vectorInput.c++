#include<iostream>
#include<vector>
using namespace std;
int main(){
    // array method when size is initialize
    vector<int> v(5);
    for(int i=0;i<5;i++){ // i < v.size()
        cin>>v[i];
    }
    for(int i=0;i<5;i++){ // i < v.size()
        cout<<v[i]<<" ";
    }

    cout<<endl<<endl;

    // if push_back() operation performed when size is initialized
    vector<int> v2(5);
    v2[0]=1;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(4);
    
    for(int i=0;i<v2.size();i++){
        cout<<v2[i]<<" ";
    }

    cout<<endl<<endl;

    // When vector size is not initialized
    vector<int> v1;
    int n;
    cout<<"Enter the no. element you want:";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v1.push_back(x);
    } 
    for(int i=0;i<n;i++){ // i < v1.size()
        cout<<v1[i]<<" ";
    }  

}