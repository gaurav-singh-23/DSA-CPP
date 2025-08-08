#include<iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 7;

    int lo = 0;
    int hi = n-1;
    bool flag = true;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == x){
            cout<<arr[mid+1];
            flag = false;
            break;
        }
        else if(arr[mid]<x) lo = mid+1;
        else if(arr[mid]>x) hi = mid-1;
    }
    if(flag == true) cout<<arr[lo];
    
}