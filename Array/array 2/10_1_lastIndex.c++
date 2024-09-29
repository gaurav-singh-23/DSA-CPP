// Find the last occurrence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter The No. of elements :";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){  // input
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout<<endl;
    
    int x;
    cout<<"Enter x : ";
    cin>>x;
    int idx=-1; // if element x not found then ---> print -1
    for(int i=0;i<n;i++){ // i < v.size() // forward loop 
        if(v[i]==x){
            idx=i;
        }
    }
    cout<<"index : "<<idx;

}