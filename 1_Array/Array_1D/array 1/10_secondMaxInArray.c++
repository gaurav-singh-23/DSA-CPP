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

    int max=arr[0];  // INT_MIN 
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }

    int sec_max=arr[0];
    for(int i=0;i<=n-1;i++){
        if(sec_max<arr[i] && arr[i]!=max){
            sec_max=arr[i];
        }
    }
    cout<<"Maximun Element:"<<max<<endl;
    cout<<"Second Maximun Element:"<<sec_max;
}