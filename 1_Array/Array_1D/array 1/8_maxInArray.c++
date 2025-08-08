#include<iostream>
// #include<limits>
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

    int max = arr[0];  // int max = INT_MIN ; --> sabse smallest value
    for(int i=1;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"Maximum Element:"<<max;
}