// Better bubbleSort

#include<iostream>
using namespace std;

int main(){
    int arr[7] = {2,40,34,56,23,1,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //bubble Sort
    for(int i = 0;i<n-1;i++){ // n-1 passes
        bool flag = true; // check mark
        for(int j = 0;j<n-1-i;j++){ // n-1-i ----> for more efficiency in Time Complexity---> O(n^2)
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }
        if(flag == true){ // swap didn't happen
            break;
        }
    }
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

// n-1-i ---> reduces extra comparisons in each pass