#include<iostream>
using namespace std;
int main(){

    // Declaration
    int arr[3][3]; // If we are only declaring then its necessary to give dimension , & same goes for 1d array
    // rows -> 3  0-2
    // colums -> 3  0-2
    int x;
    cout<<x<<endl; // aagar kisi variable ko mai uninitialized chod deta hu to , when it is accesed then result is --> Garbage value
    cout<<arr[0][0]<<endl; // output -> Garbage value

    // Initialization (M-1)
    arr[0][0] = 4;
    cout<<arr[0][0];

    // Initialization (M-2)
    int arrr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};

    // Initialization (M-3)
    int arrrr[3][3] = {1,2,3,4,5,6,7,8,9};

    // Initialization (M-4)
    int arrrrr[][3] = {1,2,3,4,5,6,7,8,9};
}