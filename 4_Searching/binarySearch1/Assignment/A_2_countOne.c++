/*  Given a sorted binary array, efficiently count the total number of 1’s in it.
Input 1 : a = [0,0,0,0,1,1]
Output 1: 2   */

#include<iostream>
using namespace std;

int main(){
    bool arr[] = {0,0,0,0,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    // first occurrence
    int lo = 0;
    int hi = n-1;
    int m1 = 0;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] > 1) hi = mid-1;
        else if(arr[mid] < 1) lo = mid+1;
        else if(arr[mid] == 1){
            if(mid == 0 || arr[mid-1]!=1){
                m1 = mid;
                break;
            }
            else hi = mid-1;
          
        }
    }

    // last occurrence
    lo = 0;
    hi = n-1;
    int m2 = 0;

    while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid] > 1) hi = mid-1;
        else if(arr[mid] < 1) lo = mid+1;
        else if(arr[mid] == 1){
            if(mid == n-1 || arr[mid+1]!=1){
                m2 = mid;
                break;
            }
            else lo = mid+1;
        }    
    }

    cout<<m2-m1+1;

    // M2
    //cout<<n-m1;
}