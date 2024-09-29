#include<iostream>
using namespace std;
int main(){
    int arr[7];

    // Traditional way of input
    // cin>>arr[0];
    // cin>>arr[1];
    // cin>>arr[2];

    // Traditional way of output
    // cout<<arr[0];
    // cout<<arr[1];
    // cout<<arr[2];
    
    // input
    for(int i=0;i<=6;i++){
        cin>>arr[i]; // space deke (ya) phir enter krke next line me bhi de sakte hain
    }

    // output
    for(int i=0;i<=6;i++){
        cout<<arr[i]<<" ";
    }
}