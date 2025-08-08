#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,4,5,9,15,18,21,24};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x = 15;

    for(int i = 0;i < n;i++){
        if(arr[i] == x){
            cout<<arr[i-1];
            break;
        }
        if(arr[i]>x){
            cout<<arr[i-1];
            break;
        }
    } // O(n)
}