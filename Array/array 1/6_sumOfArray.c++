#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter the ements of array : ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<=n-1;i++){
        sum=sum+arr[i];
    }

    cout<<"sum of array elements : "<<sum;
}