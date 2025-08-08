// Count the no. of elements greater than x

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    // input
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    
    int x;
    cout<<"Enter the Number:";
    cin>>x;
    int count=0;
    for(int i=0;i<=n-1;i++){
        if(arr[i]>x){
            count++;
        }
    }
    
    cout<<"No. of elements greater than x:";
    cout<<count;
}