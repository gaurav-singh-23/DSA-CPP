/*Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
inclusive in sorted order.
There is only one repeated number in nums, return this repeated number.
Input 1: arr[] = {1,2,3,3,4}
Output 1: 3
Input 2: arr[] = {1,2,2,3,4,5}
Output 2: 2*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 0;i<n+1;i++){
        cin>>arr[i];
    }

    int lo = 0;
    int hi = n;
    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] == mid) {
            if(arr[mid-1] == mid) {
                cout<<mid;
                break;
        }
            else hi = mid-1;
        }
        else if(arr[mid] > mid) lo = mid+1;
    }
}