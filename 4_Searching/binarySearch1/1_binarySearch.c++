#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int lo = 0;
    int hi = n-1;
    while(lo<=hi){
        int mid = (lo + hi)/2;
        if(arr[mid] == target) return mid;
        else if(arr[mid] > target) hi = mid-1;
        else lo = mid+1;
    }
    return - 1;
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10,23,34,45,56,78,89,90,100,433,775,999,3999}; // should be sorted
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 775;

    cout<<binarySearch(arr,size,target);
}