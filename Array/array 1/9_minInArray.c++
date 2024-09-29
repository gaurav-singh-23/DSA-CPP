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

    int min=arr[0];  // int min = INT_MAX ; (sabse biggest value)
    for(int i=1;i<=n-1;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"Minimum Element:"<<min;
}