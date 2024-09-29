// Find the last occurrence of x in the array.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter The No. of elements :";
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){ 
        int x;
        cin>>x;
        v.push_back(x);  // push_back , pop_back operation use krne ke badd hi hum loop me n ki jagah v.size() krr sakte hain
    }
    
    int x;
    cin>>x;
    int idx=-1;
    for(int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<idx;

}