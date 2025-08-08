#include<iostream>
using namespace std;

int main(){
    int arr[7] = {2,40,34,56,23,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    // bubble Sort
    for(int i = 0;i<n-1;i++){ // n-1 passes
        for(int j = 0;j<n-1;j++){ // traversing in array
            if(arr[j]>arr[j+1]){
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// Time Complexity ----> O(n^2) ---> but it is less efficient because of one extra comparison in each pass