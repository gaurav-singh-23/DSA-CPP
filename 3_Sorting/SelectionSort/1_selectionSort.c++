#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int arr[] = {5,3,1,4,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int ele : arr){
        cout<<ele<<" ";
    }
    cout<<endl;

    // selection sort
    for(int i = 0;i<n-1;i++){
        int min = INT_MAX;
        int mindx = -1;
        // minimum element calculation in orange box
        for(int j = i;j<n;j++){
            if(min>arr[j]){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);
    }

    for(int ele : arr){
        cout<<ele<<" ";
    }
}